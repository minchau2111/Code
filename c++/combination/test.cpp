#include <bits/stdc++.h>
using namespace std;

long long GCD(long long x, long long y){
	while(y>0){
		int tmp=x%y;
		y=x;
		x=tmp;
	}
	return x;
}

main()
{
	int t;
	cin>>t;
	while(t--){
		int x,y,z,n;
		cin>>x>>y>>z>>n;
		int ucln=GCD(GCD(x,y),z);
		long long bcnn=(x*y*z)/ucln;
		long long a=pow(10,n-1);
		long long b=pow(10,n)-1;
		if(bcnn<a){
			if(a%bcnn==0){
				cout<<a;
			}
			else cout<<(a/bcnn+1)*bcnn;
		}
		else if(bcnn>=a && bcnn<=b) cout<<bcnn;
		else cout<<"-1";
	}
	cout<endl;
}

