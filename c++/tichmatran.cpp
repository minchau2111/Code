// tich hai ma tran

#include<bits/stdc++.h>

using namespace std;

int main(){
	int a[50][50],b[50][50],c[50][50];
	int m,n,k;
	cin>>m>>n>>k;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			cin>>b[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			for(int l=0;l<k;l++){
				c[i][j]+=a[i][l]*b[l][j];
			}
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<k;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
