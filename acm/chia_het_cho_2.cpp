#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int dem=0;
		for(int i=2;i<=sqrt(n);i++){
			if(i%2==0){
				if(n%i==0) dem++;
			}
		}
		if(n%2==0) dem++;
		cout<<dem;
		cout<<endl;
	}
}
