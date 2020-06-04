// tim uoc chung lown nhat va boi chung nho nhat

#include <bits/stdc++.h>
using namespace std;

main()
{
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int t=a*b;
		while(a!=b){
			if(a>b) a-=b;
			else b-=a;
		}
		cout<<a;
		cout<<" "<<t/a;
		cout<<"\n";
	}
	return 0;
}

