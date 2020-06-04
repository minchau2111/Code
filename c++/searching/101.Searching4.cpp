#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int a[100006];

int search(int a[], int l, int h, int key) 
{ 
    if (l > h) return -1; 
    int mid = (l+h)/2; 
    if (a[mid] == key) return mid; 
    if (a[l] <= a[mid]) 
    { 
        if (key >= a[l] && key <= a[mid]) 
        	return search(a, l, mid-1, key); 
        return search(a, mid+1, h, key); 
    } 
    if (key >= a[mid] && key <= a[h]) 
        return search(a, mid+1, h, key); 
    return search(a, l, mid-1, key); 
} 

main(){
	int t,n,x;
	cin >> t;
	while(t--){
		cin >> n >> x;
		for(int i = 0; i < n; i++) cin >> a[i];
		cout << search(a,0,n-1,x) << endl;
	}
}
 
 
