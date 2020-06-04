// liệt kê và đêm các số chỉ bao gồm các chữ số nguyên tố

#include<bits/stdc++.h>

using namespace std;
int a[10000],b[10000],n=0;

int tim(int x){
    for(int i=0;i<n;i++){
        if(a[i]==x) return i;
    }
    return -1;
}

int nt(int n){
    while(n>0){
        int a=n%10;
        if(a!=2 && a!=3 && a!=7 && a!=9) return 1;
        return 0;
        n/=10;
    }
}

int main(){
    int x;
    while(cin>>x){
        if(nt){
            int t=tim(x);
            if(t==-1){
                a[n]=x;
                b[n]=1;
                n++;
            }
            else b[n]++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<b[i]<<endl;
    }
}