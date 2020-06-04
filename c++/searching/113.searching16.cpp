#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int x)
{
	sort(a,a+n);
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
		int n1,n2,n3;
		cin>>n1>>n2>>n3;
		int a[n1+1], b[n2+1], c[n3+1];
		for(int i = 0; i < n1; i++) cin >> a[i];
		for(int i = 0; i < n2; i++) cin >> b[i];
		for(int i = 0; i < n3; i++) cin >> c[i];
		vector<int>ans;
		for(int i = 0; i < n1; i++){
			if(binarySearch(b, n2, a[i]) == 1 && binarySearch(c, n3, a[i]) == 1){
				ans.push_back(a[i]);
			}
		}
		sort(ans.begin(),ans.end());
		for(int i = 0; i < ans.size(); i++){
			cout << ans[i] << " ";
		}
		cout << endl;
	}
}


