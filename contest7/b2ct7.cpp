#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	stack <int> k;
	string s;
	while(t--){
		cin>>s;
		if(s=="PUSH"){
			int tmp; cin>>tmp;
			k.push(tmp);
		}
		else if( s=="PRINT"){
			if(!k.empty()){
				cout<<k.top()<<endl;
			}
			else cout<<"NONE"<<endl;
		}
		else if(s=="POP"){
			if(!k.empty()) k.pop();
		}
	}
	return 0;
}

