#include<bits/stdc++.h>
using namespace std;
void solve(int a[], int n,int dp[]){
	stack <int> st;
	st.push(0);
	dp[0]=1;
	for(int i=1;i<n;i++){
		while(!st.empty()&&a[st.top()]<=a[i]){
			st.pop();
		}
		dp[i]= (st.empty())? (i+1):(i-st.top());
		st.push(i);
	}
}
int main(){
	int n;
	cin>>n;
	int a[n+5];
	int dp[n+5];
	for(int i=0;i<n;i++) cin>>a[i];
	solve(a,n,dp);
	for(int i=0;i<n;i++) cout<<dp[i]<<" ";
	cout<<endl;
	return 0;
}

