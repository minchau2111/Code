#include <bits/stdc++.h>
using namespace std;

long long poww(int x, int y, int p){
	if(y==0) return 1%p;
	if(y==1) return x%p;
	if(y%2==0) return ((poww(x,y/2,p)%p)*(poww(x,y/2,p)%p))%p;
	else return ((poww(x,y/2,p)%p)*(poww(x,y/2,p)%p)*x%p)%p;
}

main()
{
	int t;
	cin>>t;
	while(t--){
		int x,y,p;
		cin>>x>>y>>p;
		cout<<poww(x,y,p);
		cout<<endl;
	}
	return 0;
}

