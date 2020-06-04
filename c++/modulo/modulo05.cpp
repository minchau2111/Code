#include <bits/stdc++.h>
using namespace std;

main()
{
	int t;
	cin>>t;
	while(t--){
		string n;
		cin>>n;
		long long m;
		cin>>m;
		long long k=0;
		for(int i=0;i<n.size();i++){
			k=(k*10+n[i]-'0')%m;
		}
		cout<<k;
		cout<<endl;
	}
}

