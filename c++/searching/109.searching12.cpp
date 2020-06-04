#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int n, int x)
{
	int r = n - 1; 
	int l = 0;
	while (r >= l)
	{
    	int mid = l + (r - l) / 2; 
    	if (arr[mid] == x) return 1;
    	else if (arr[mid] > x) r = mid - 1;
    	else l = mid + 1;
//    	cout << mid << endl;
  	}
  	return -1;
}
int main (){
	int t;
	cin>>t;
	while(t--){
		int n,k,ans=-1;
		cin>>n>>k;
		int a[n+1];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i = 0; i < n; i++){
			if(binarySearch(a, n-i-1, a[n-1-i]-k) == 1){
//				cout << binarySearch(a, n-i-1, a[n-1-i]-k) << endl;
//				cout << i << endl;
				ans = 1;
				break;
			} 
		}
		cout << ans << endl;
	}
	return 0;
}


