// so nguyen duong nho nhat co n chu so chia het cho x y z

#include <bits/stdc++.h>
using namespace std;
long long GCD(long long x,long long y){
	long long z=y%x;
	while(y>0){
		z=x%y;
		x=y;
		y=z;
	}
	return x;
}

long long LCM(long long x , long long y){
	return (x*y)/GCD(x,y);
}


long long mincy(long long n){
	long long ans=1;
	for(int i=1;i<n;i++){
		ans*=10;
	}
	return ans;
}

main()
{
	int t;
	cin>>t;
	while(t--){
		long long x,y,z;
		cin>>x>>y>>z;
		long long bc=x;
		bc=LCM(LCM(x,y),z);
		cout << bc <<endl;
		long long n;
		cin>>n;
		long long k=bc*((mincy(n)/bc)+1);
		
		cout<<"\n";
	}
}

