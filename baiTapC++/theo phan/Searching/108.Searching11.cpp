#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int a[100006];

int ascendingBinarySearch(int a[], int low, int high, int key) 
{ 
   while (low <= high) 
	{ 
    	int mid = low + (high - low) / 2; 
    	if (a[mid] == key) return mid; 
    	if (a[mid] > key) high = mid - 1; 
    	else low = mid + 1; 
	} 
	return -1; 
} 

int descendingBinarySearch(int arr[], int low, int high, int key) 
{ 
   while (low <= high) 
	{ 
    	int mid = low + (high - low) / 2; 
    	if (arr[mid] == key) return mid; 
    	if (arr[mid] < key) high = mid - 1; 
    	else low = mid + 1; 
	} 
    return -1; 
} 
   
// finding bitonic point (diem lon nhat trong day)
int findBitonicPoint(int a[] ,int n, int l, int r ) 
{ 
    int mid; 
    mid = (r + l) / 2; 
    if(a[mid] > a[mid-1] && a[mid] > a[mid + 1]) //lon hon 2 phan tu lien ke
    { 
        return mid; 
    }   
    else if(a[mid] > a[mid - 1] && a[mid] < a[mid + 1]) //lon hon phan tu truoc, nho hon phan tu sau
    { 
        findBitonicPoint(a,n, mid , r); 
    } 
    else if(a[mid] < a[mid - 1] && a[mid] > a[mid + 1]) //nho hon phan tu truoc, lon hon phan tu sau
    { 
        findBitonicPoint(a, n, l, mid); 
    } 
} 
  
int searchBitonic(int a[], int n, int key, int index) 
{ 
    if(key > a[index]) return -1;  
    else if(key == a[index]) return index; 
    else
    {    
		int temp = ascendingBinarySearch(a, 0, index - 1, key); 
        if (temp != -1) 
        { 
            return temp; 
        }   
        // Search in right of k 
        return descendingBinarySearch(a, index + 1, n - 1, key); 
    } 
} 

main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		for(int i=0;i<n;i++) cin>>a[i];
		int index = findBitonicPoint(a, n, 0, n-1);   
//		cout << "index " << index << endl;
   		int ans = searchBitonic(a, n, x, index); 
    	cout << ans << endl;
	}
}
  
