// sang nguyen to

#include<bits/stdc++.h>

using namespace std;

void nguyento(long long n){
	bool prime[n+1];
	memset(prime,true,sizeof(prime));
	for(int p=2;p*p<=n;p++){
		if(prime[p]==true){
			for(int i=p*p;i<=n;i+=p){
				prime[i]=false;
			}
		}
	}
		for(int p=2;p<=n;p++){
			if(prime[p]){
				cout<<p<<" ";
			}
		}
	cout<<endl;
}

int main(){
	
		long long n;
		cin>>n;
		nguyento(n);
	return 0;
}
