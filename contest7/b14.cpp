#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack <string> st;
		for(int i=0;i<s.size();i++){
			if((s[i]<='z'&&s[i]>='a')||(s[i]<='Z'&&s[i]>='A')){
				st.push(string(1,s[i]));
			}
			else{
				string op1= st.top(); st.pop();
				string op2= st.top(); st.pop();
				string res= s[i]+op2+op1;
				st.push(res);
			}
		}
		cout<<st.top()<<endl;
	}
	return 0;
}

