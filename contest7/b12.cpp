#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack <string> st;
		for(int i=s.size()-1;i>=0;i--){
			if((s[i]<='z'&&s[i]>='a')||(s[i]<='Z'&&s[i]>='A')){
				st.push(string(1,s[i]));
			}
			else{
				string op1=st.top();
				st.pop();
				string op2=st.top();
				st.pop();
				string res='('+op1+s[i]+op2+')';
				st.push(res);
			}
		}
		cout<<st.top()<<endl;
	}
	return 0;
}

