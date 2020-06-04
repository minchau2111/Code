#include <bits/stdc++.h>
using namespace std;

main()
{
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		while(a.size()>b.size()) b="0"+b;
		while(a.size()<b.size()) a="0"+a;
		if(a<b) swap(a,b);
		int borrow=0;
		int tmp;
		string s;
		for(int i=a.size()-1;i>=0;i--){
			tmp=(a[i]-'0')-(b[i]-'0')-borrow;
			if(tmp<0){
				tmp+=10;
				borrow=1;
			}
			else borrow=0;
			s=char(tmp+'0')+s;
		}
		cout<<s;
		cout<<endl;
	}
}

