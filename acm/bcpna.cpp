// phân tích thành tổng các số nguyên tố

#include<bits/stdc++.h>

using namespace std;

int kiemtrant(int a)
{
	if(a<2) return 0;
	else for(int i=2;i<=sqrt(a);i++){
		if(a%i==0) return 0;
	}
    return 1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int d=0;
        if(kiemtrant(n)) d++;
        int x;
        for(int i=2;i<=n/2;i++){
            x=0;
            if(kiemtrant(i)){
                for(int j=i;j<=n;j++){
                    if(kiemtrant(j)){
                        x+=j;
                        if(x==n) d++;
                        if(x>n) break;
                    }
                }
            }
        }
        cout<<d<<endl;
    }
    return 0;
}