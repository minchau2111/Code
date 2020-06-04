// tim vi tri cua phan tu x trong mang

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		int mark=-1;	// dua ra -1 neu k co x trong mang
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==x) mark =i+1;	// vi tri cua x la i+1
		}
		cout<<mark<<endl;
	}
}
