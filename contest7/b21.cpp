#include<bits/stdc++.h>
using namespace std;
vector <int> ans;
void solve1(int a[], int n){
	stack <int> st;
	ans.clear();
	for(int i=0;i<n;i++){
		if(i==n-1){
			ans.push_back(-1);
		}
		else{
			int j=i+1;
			st.push(a[j]);
			bool ok=true;
			while(j<n){
				if(a[i]<st.top()){
					ans.push_back(j);
					ok=false;
					st.pop();
					break;
				}
				else{
					st.pop();
					j++;
					if(j==n) break;
					st.push(a[j]);
				}
			}
			if(ok){
				ans.push_back(-1);
			}
		}
	}
}
void solve2(int a[], int n){
	stack <int> st;
	for(int i=0;i<ans.size();i++){
		if(i==ans.size()-1){
			cout<<-1<<" ";
		}
		else if(ans[i]==-1){
			cout<<-1<<" ";
		}
		else{
			int j=ans[i]+1;
			st.push(a[j]);
			bool ok=true;
			while(j<ans.size()){
				if(a[ans[i]]>st.top()){
					cout<<st.top()<<" ";;
					ok=false;
					st.pop();
					break;
				}
				else{
					st.pop();
					j++;
					if(j==ans.size()) break;
					st.push(a[j]);
				}
			}
			if(ok){
				cout<<-1<<" ";
			}
		}
	}
	cout<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+5];
		for(int i=0;i<n;i++) cin>>a[i];
		solve1(a,n);
		solve2(a,n);
	}
	return 0;
}

