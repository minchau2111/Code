#include <bits/stdc++.h>

using namespace std;

int main(){
	while(true){
		long long a,b;
		cin>>a>>b;
		if(a==0 && b==0) break;
		cout<<__gcd(a,b)<<" "<<(a*b)/__gcd(a,b);
		cout<<endl;
	}
	
}


