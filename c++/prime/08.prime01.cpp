// in ra cac uoc nguyen to nho hon n

#include<bits/stdc++.h>

using namespace std;

void thuasont(long long n){

	for(int p=2;p<=sqrt(n);p++){
		while(n%p==0 ){
			cout<<p<<" ";
			n=n/p;
		}
	}
	if(n>1) cout << n;
}

int main(){
	int t;
	cin>>t;
	while (t--){
		long long n;
		cin>>n;
		thuasont(n);
		cout<<"\n";
	}
	return 0;
}
