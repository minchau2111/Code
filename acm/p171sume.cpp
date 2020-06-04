// dãy con có tổng lớn nhất

#include<bits/stdc++.h>

using namespace std;

bool check(int n, int a[]){
    for(int i=0;i<n;i++){
        if(a[i]>0) return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    int a[n+5];
    int sum1=0,sum2=0;
    int maxx=-1000000000;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>0) sum1+=a[i];
        if(a[i]>maxx) maxx=a[i];
    }
    int tmp=0;
    for(int i=0;i<n;i++){
        tmp+=a[i];
        if(tmp<0){
            tmp=0;
        }
        sum2=max(sum2,tmp);
    }
    if(check(n,a)){
        sum1=sum2=maxx;
    }
    cout<<sum2<<" "<<sum1;
}