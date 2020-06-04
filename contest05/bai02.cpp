// dãy con tăng dài nhất

#include<bits/stdc++.h>

using namespace std;
int n;
int a[1005],f[1005];

int sunn(){
    int result=1;
    for(int i=1;i<=n;i++){
        f[i]=0;
        for(int j=0;j<i;j++){
            if(a[j]<a[i])
                f[i]=max(f[i],f[j]+1);
        }
        result=max(result,f[i]);
    }
    return result;
}

int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    cout<<sunn();
    cout<<endl;
}