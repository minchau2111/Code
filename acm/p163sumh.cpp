// xúc xắc

#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int ti=0,teo=0,equal2=0;
    for(int i=1;i<=6;i++){
        if((abs(a-i))>(abs(b-i))) teo++;
        if((abs(a-i))<(abs(b-i))) ti++;
        if((abs(a-i))==(abs(b-i))) equal2++;
    }
    cout<<ti<<" ";
    cout<<equal2<<" ";
    cout<<teo;
}