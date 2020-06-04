#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack <int> st;
		for(int i=0;i<s.size();i++){
			if(s[i]>='0'&&s[i]<='9'){
				st.push(s[i]-48);
			}
			else {
				int op1=st.top(); st.pop();
				int op2=st.top(); st.pop();
				int tmp;
				switch(s[i]){
					case '+':
						tmp=op1+op2;
						break;
					case '-':
						tmp=op2-op1;
						break;
					case '*':
						tmp=op2*op1;
						break;
					case '/':
						tmp=op2/op1;
						break;
				}
				st.push(tmp);
			}
		}
		cout<<st.top()<<endl;
	}
	return 0;
}

