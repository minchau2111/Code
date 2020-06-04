#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int n, int x)
{
	int r = n - 1; 
	int l = 0;
	while (r >= l)
	{
    	int mid = l + (r - l) / 2; 
    	if (arr[mid] == x) return mid;
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
		int n,x,k;
		cin>>n>>k>>x;
		int a[n+1];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}	
		int key = binarySearch(a, n, x);
		if (key == -1){
			cout << "khong ton tai X" << endl;
			continue;
		}
		else{
			int left = max(0,key-k/2);
			int right = min(n-1,key+k/2);
			if(left == 0){
				int cnt = 0;
				for(int i = left; i <= left + k; i++){
					if(i == key) continue;
					cout << a[i] << " ";
				}
			}
			else if(right == n-1){
				for(int i = right; i >= right - k; i--){
					if(i == key) continue;
					cout << a[i] << " ";
				}
			}
			else{
				if(k % 2 != 0) left--;
				for(int i = left; i <= right; i++){
					if(i == key) continue;
					cout << a[i] << " ";
				}
			}
			cout << endl;
		}
		cout<<endl;
	}
	return 0;
}


