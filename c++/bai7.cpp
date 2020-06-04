// tim so nho nhat co n chu so chia het cho x,y,z

#include<bits/stdc++.h>

using namespace std;

int main(){
	int x,y,z,n;
	cin >> n >> x >> y >> z;
	for(int i = 10*n-1 ; i < (10*(n+1)-1) ; i++){
		if(i%x==0 && i%y==0 && i%z==0) cout<<i;
	}
	return 0;
}
