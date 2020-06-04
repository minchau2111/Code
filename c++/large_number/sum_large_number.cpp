#include <bits/stdc++.h>
using namespace std;

main()
{
	int t;
	cin>>t;
	while(t--){
		string x,y;
		cin>>x>>y;
		while(x.size()<y.size()) x="0"+x;
		while(x.size()>y.size()) y="0"+y;
		int carry=0;
		int tmp;
		string s;
		for(int i=x.size()-1;i>=0;i--){
			tmp=(x[i]-'0')+(y[i]-'0')+carry;
			carry=tmp/10;
			s=(char)(tmp%10+'0')+s;
		}
		if(carry>0) s="1"+s;
		cout<<s; 
		cout<<endl; 
	}
}

