#include<bits/stdc++.h>
using namespace std;
void solve(int a[], int n){
	stack <int> st;
	for(int i=0;i<n;i++){
		if(i==n-1){
			cout<<-1<<" ";
		}
		else{
			int j=i+1;
			st.push(a[j]);
			bool ok=true;
			while(j<n){
				if(a[i]<st.top()){
					cout<<st.top()<<" ";
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
		solve(a,n);
	}
	return 0;
}

