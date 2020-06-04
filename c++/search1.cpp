// tim vi tri phan tu X co trong mang

#include<bits/stdc++.h>

using namespace std;

void search1(int A[],int n,int X){
	cin>>X;
	for(int i=0;i<n;i++){
		if(X==A[i]) cout<<i;
		else cout<<"-1";
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int A[100];
		cout<<"nhap so phan tu cua mang: ";
		for(int i=0;i<n;i++){
			cout<<"A[%d]: "<<i;
			cin>>A[i];
		}
		search1();
	}
	system("pause");
	return 0;
}
