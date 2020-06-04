#include <bits/stdc++.h>
using namespace std;

void sum(int n, long long k){
	int x=n/k;
	int y=n%k;
	long long sum1=(k*(k-1))/2;
	long long sum2=(y*(y+1))/2;
	if(x*sum1+sum2==k) cout<< 1;
	else cout<<0;
	
}

main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		long long k;
		cin>>n>>k;
		sum(n,k);
		cout<<endl;
	}
	return 0;
}

