#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int cnt = 0;
		for(int i = 0; i < n; i++){
			if(a[i] != a[i+1]) cnt++;
			if(cnt == k){
				cout << a[i] << endl;
				break;
			}
		}
	}
	return 0;
}

