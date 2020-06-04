#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int t=n;
		int x=0;
		while(n>0){
			x=x*10+n%10;
			n/=10;
		}
		if(t==x) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}
