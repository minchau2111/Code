#include<bits/stdc++.h>
using namespace std;
vector <pair <int,int> > a;
int X[20];
string s;
vector <string> res;
void Try(int i,int n){
	for(int j=0;j<=1;j++){
		X[i]=j;
		if(i==n-1){
			int ok[201]={0};
			int d=-1;
			for(int l=0;l<s.size();l++){
				if(s[l]=='('&&X[++d]==0){
					ok[a[d].first]=1;ok[a[d].second]=1;
				}
			}
			if(d>=0){
				string tmp="";
				for(int l=0;l<s.size();l++){
					if(ok[l]==0) tmp+=s[l];
				}
				res.push_back(tmp);
			}
		}
		else Try(i+1,n);
	}
}

bool cmp( pair<int,int> x,pair<int,int> y ){
	return x.first<y.first;
}
int main(){
	cin>>s;
	stack <int> st;
	int n= s.size();
	for(int i=0;i<n;i++){
		if(s[i]=='('){
			st.push(i);
		}
		else if(s[i]==')'){
			pair<int,int> ptr;
			ptr.first= st.top();
			ptr.second=i;
			a.push_back(ptr);
			st.pop();
		}
	}
	sort(a.begin(), a.end(), cmp);
	Try(0, a.size());
	sort(res.begin(), res.end());
	vector <string> ans;
	for(int i=0;i<res.size();i++){
		if(res[i]==s) continue;
		if(ans.size()==0) ans.push_back(res[i]);
		else if(res[i]!=ans[ans.size()-1]) ans.push_back(res[i]);
	}
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<endl;
	}
	return 0;
}

