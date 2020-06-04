// tính giai thừa

#include<bits/stdc++.h>

using namespace std;

int main(){
    while(1){
        int n;
        cin>>n;
        if(n==0) break;
        long long ans=1;
        for(int i=1;i<=n;i++){
            ans*=i;
        }
        cout<<ans<<endl;
    }
}