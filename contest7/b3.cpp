#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		stack <char> k;
		for(int i=0;i<s.length();i++){
			while(s[i]!=' '&&i<s.length()){
				k.push(s[i]);
				i++;
			}
			while(!k.empty()){
				cout<<k.top();
				k.pop();
			}
			cout<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

