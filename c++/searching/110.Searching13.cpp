#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int a[100006];

int findPivot(int a[], int low, int high) 
{ 
  // base cases 
	if (high < low) return -1;
	if (high == low) return a[low]; 
	int mid = (low + high)/2; /*low + (high - low)/2;*/
	if (mid < high && a[mid] > a[mid + 1]) return a[mid+1];   
	if (mid > low && a[mid] < a[mid - 1]) return a[mid-1 + 1];   
	if (a[low] >= a[mid]) return findPivot(a, low, mid-1);    
	return findPivot(a, mid + 1, high); 
} 

main(){
	int t,n,x;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++) cin >> a[i];
		cout << findPivot(a,0,n-1) << endl;
	}
}
