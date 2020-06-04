// (a*b)modm=1


#include <bits/stdc++.h>
using namespace std;

int abc(int a,int m){
	for(int i=0;i<m;i++ ){
		if((a*i)%m==1) return i;
	}
	return -1;
}
	

main()
{
	int t;
	cin>>t;
	while(t--){
		int a,m;
		cin>>a>>m;
		cout<<abc(a,m);
		cout<<endl;
	}
	return 0;
}

