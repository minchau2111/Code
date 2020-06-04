#include <bits/stdc++.h>
using namespace std;

int prime(int n){
	bool prime[n+1];
	memset(prime,true,sizeof(prime));
	for(int p=2;p*p<=n;p++){
		if(prime[p]){
			for(int i=p*p;i<=n;i+=p){
				prime[i]=false;
			}
		}
	}
	for(int i=0;i<=n;i++){
		
	}
}

main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==1) cout<<n<<" ";
		for(int i=2;i<=n;i++){
			if(n%2==0) cout<<"2 ";
		}
	}
	return 0;
}

