#include<bits/stdc++.h>

using namespace std;

void sangnguyento(int n){
	bool prime[n+1];
	memset(prime,true,sizeof(prime));
	for(int p=2;p*p<=n;p++){
		if(prime[p]==true){
			for(int i=p*p;i<=n;i+=p){
				prime[i] = false;
			}
		}
	}
	int max=0;
	for(int p=2;p<=n;p++){
		if(prime[p]){
			if (max<p) max=p;
		}
	}
		cout<<max;
}

int main(){
	int n,t;
	cout<<"nhap vao so bo test: ";
	cin>> n;
	while (t--){
		cout<<"nhap vao so n: ";
		cin>>n;
		sangnguyento(n);
	}
	system ("pause");
	return 0;
}
