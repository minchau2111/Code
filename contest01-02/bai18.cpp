// máy ATM

#include <bits/stdc++.h>

using namespace std;

int n,S;
int a[100];
int res = 99999;

void Try(int i , long long sum , int d){
	if (sum>S || d>res) return;	
	if(i==n){
		if (sum == S) res = min(res,d);
		return;
	}
	Try(i+1,sum,d);
	Try(i+1,sum+a[i],d+1);
}

int main(){
    cin>>n;
	cin>>S;
	for(int i=0;i<n;i++) cin>>a[i];
	Try(0,0,0);
	if (res==99999) cout<<-1;
	else cout<<res;
}