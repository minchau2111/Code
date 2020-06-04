// tim boi  chung nho nhat co n chu so chia het cho x y z

#include <bits/stdc++.h>

using namespace std;

long long poww(int n){
	long long k=1;
	for(int i=n;i>0;i--){
		k=k*10;
	}
	return k;
}

int main (){
	int t;
	cin>>t;
	while(t--){
		long long x,y,z,n;
		cin>>x>>y>>z>>n;
		long long a=x*y/__gcd(x,y);
		long long b=a*z/__gcd(a,z);
		
		long long c=poww(n-1),d=poww(n)-1;
		if(b<c){
			if(c%b==0){
				cout<<c;
			}
			else{
				cout<<(c/b+1)*b;
			}
		}
		else if(c<=b && b<=d){
			cout<<b;
		}
		else{
			cout<<"-1";
		}
		cout<<endl;
	}
	return 0;
}

