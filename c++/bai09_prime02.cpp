#include <bits/stdc++.h>
using namespace std;

int uocmax(int n){
	bool prime[n+1];
	memset(prime,true,sizeof(prime));
	for(int p=2;p*p<=n;p++){
		if(prime[p]){
			for(int i=p*p;i<=n;i+=p){
				prime[p]=false;
			}
		}
	}
	int max=0;
	for(int i=0;i<=n;i++){
		while(n%i==0){
			if(i>max) max=i;
			else n/=i;
		}
		cout<<max;
	}
}

main()
{
	 int t;
	 cin>>t;
	 while(t--){
	 	int n;
	 	cin>>n;
	 	uocmax(n);
	 }
	 return 0;
}

