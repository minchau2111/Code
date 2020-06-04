#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		bool mark=true;
		int n=s.size();
		for(int i=0;i<n/2;i++){
			if(s[i]!=s[n-i-1]) mark=false;
		}
		if(mark) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}
