// ốc sên
// chưa lm đk

#include<bits/stdc++.h>

using namespace std;

int main(){
    long long a,b,v;
    cin>>a>>b>>v;
    long long x=0;;
    long long h=0;
    while(h!=v){
        h+=a;
        x++;
        if(h==v) cout<<x;
        else h-=b;
    }
}