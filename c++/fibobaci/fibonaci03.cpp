#include <bits/stdc++.h>
using namespace std;

int f[1000];

void fibonaci(){
	f[0]=0;
	f[1]=1;
	for(int i=2;i<=92;i++){
		f[i]=f[i-1]+f[i-2];
	}
}

bool kiemtra(long long n){
	int pos;
	for(int i=0;i<100;i++){
		if(f[i]>n){
			 pos=i-1; 
			break;
		}	
	}
	if(f[pos]==n) return true;
	return false;
}

main()
{
	int t;
	cin>>t;
	fibonaci();
	while(t--){
		long long n;
		cin>>n;
		long long a[n+5];
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(kiemtra(a[i])) cout<< a[i]<<" "; 
		}
		cout<<endl;
	}
}

