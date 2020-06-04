// in ra cac so nguyen to trong khoang m den n

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long m,n;
		cin>>m;
		if(m<=1) m=2;
		cin>>n;
		for(int i=m;i<=n;i++){
			int mark=1;
			for(int j=2;j<=i-1;j++){
				if(i%j==0) mark=0;
			}
			if(mark==1) cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}
