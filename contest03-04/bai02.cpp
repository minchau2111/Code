// nhầm chữ số

#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin >> a>> b;
    int sum=a+b;
    int minn=sum,maxx=sum;
    int dem=1;
    while(a!=0){
        if(a%10==5){
            maxx+=dem;
        }
        if(a%10==6){
            minn-=dem;
        }
        a/=10;
        dem*=10;
    }
    dem=1;
    while(b!=0){
        if(b%10==5){
            maxx+=dem;
        }
        if(b%10==6){
            minn-=dem;
        }
        b/=10;
        dem*=10;
    }
    cout << minn<<" "<<maxx;
}