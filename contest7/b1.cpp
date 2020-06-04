#include<bits/stdc++.h>
using namespace std;

int main(){
	vector <int> stk;
    string s;
	while (cin>>s){
		if(s=="push"){
			int tmp; cin>>tmp;
			stk.push_back(tmp);
		}
		else if( s=="show"){
			if(stk.size()!=0){
				for(int i=0;i<stk.size();i++) cout<<stk[i]<<" ";
				cout<<endl;
			}
			else cout<<"empty"<<endl;
		}
		else if(s=="pop"){
			if(stk.size()!=0) stk.pop_back();
		}
	}
	return 0;
}

