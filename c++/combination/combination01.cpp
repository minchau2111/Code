#include <bits/stdc++.h>
using namespace std;

int n;
int a[1000];

void result(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<" ";
}

void sinhnhiphan(int i){
	for(int j=0;j<2;j++){
		a[i]=j;
		if(i==n){
			result();
		}
		else{
			sinhnhiphan(i+1);
		}
	}
}

main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		sinhnhiphan(1);	
		cout<<endl;
	}
}

