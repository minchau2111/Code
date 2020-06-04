#include <bits/stdc++.h>
using namespace std;

int f[1000];

void fibonaci(int n){
	f[0]=0;
	f[1]=1;
	for(int i=2;i<=92;i++){
		f[i]=f[i-1]+f[i-2];
	}
}

main()
{
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		fibonaci(n);
		int pos;
		for(int i=0;i<100;i++){
			if(f[i]>n){
			pos=i-1; 
			break;	
			}	
		}
		if(f[pos]==n) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

