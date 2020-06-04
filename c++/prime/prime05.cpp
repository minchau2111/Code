#include <bits/stdc++.h>
using namespace std;

void sangnt(long long m,long long n){
	bool prime[n+1];
	memset(prime,true,sizeof(prime));
	prime[0]=false;
	prime[1]=false;
	for(int p=2;p*p<=n;p++){
		if(prime[p]){
			for(int i=p*p;i<=n;i+=p){
				prime[i]=false;
			}
		}
	}
	for(int i=m;i<=n;i++){
		if(prime[i]) cout<<i<<" ";
	}
}

main()
{
	int t;
	cin>>t;
	while(t--){
		long long m,n;
		cin>>m>>n;
		sangnt(m,n);
		cout<<endl;
	}

}

