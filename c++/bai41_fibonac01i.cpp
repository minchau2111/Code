#include <bits/stdc++.h>
using namespace std;

long long fibonaci(long long n){
	if(n==0) return 0;
	else if(n==1) return 1;
	else return fibonaci(n-1) + fibonaci(n-2);
}

main()
{
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<fibonaci(n);	
		cout<<endl;
	}
	return 0;
}

