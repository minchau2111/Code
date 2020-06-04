#include<bits/stdc++.h>
using namespace std;
string solve(string s){
	stack <int> sh;
	stack <char> st;
	string res="", tmp="";
	int count;
	for(int i=0;i<s.length();i++){
		if(s[i]<='9'&&s[i]>='0'){
			count=0;
			while(i<s.length()&&(s[i]<='9'&&s[i]>='0')){
				count=count*10+ (s[i]-'0');
				i++;
			}
			i--;
			sh.push(count);
		}
		else if(s[i]==']'){
			if(!sh.empty()){
				count= sh.top();
				sh.pop();
			}
			tmp="";
			while(!st.empty()&&st.top()!='['){
				tmp=st.top()+tmp;
				st.pop();
			}
			if(!st.empty()&&st.top()=='[') st.pop();
			for(int j=0;j<count;j++){
				res= res+tmp;
			}
			for(int j=0;j<res.length();j++){
				st.push(res[j]);
			}
			res="";
		}
		else if(s[i]=='['){
			if(s[i-1]<='9'&&s[i-1]>='0'){
				st.push('[');
			}
			else{
				st.push('[');
				sh.push(1);
			}
		}
		else{
			st.push(s[i]);
		}
	}
	while(!st.empty()){
		res=st.top()+res;
		st.pop();
	}
	return res;
}
int main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<solve(s)<<endl;
	}
	return 0;
}

