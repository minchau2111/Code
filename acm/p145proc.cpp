// dem so phan tu khac nhau sau khi lay modulo 42

#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[50];
    int x,sum;
    memset(a,false,sizeof(a));
    for(int i=1;i<=10;i++){
        cin>>x;
        a[x%42]++;
    }
    for(int i=0;i<42;i++){
        if(a[i]!=0) sum++;
    }
    cout<<sum%42;
}