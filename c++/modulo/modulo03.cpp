#include <bits/stdc++.h>
using namespace std;

main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long k;
		cin>>k;
		int s=0;
		for(int i=1;i<=n;i++){
			s=s+i%k;
		}
		cout<<s;
		cout<<endl;
	}
}

