// đỗ xe

#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,ans=0;
    cin>>a>>b>>c;
    int x,y;
    int m[100]={0};
    for(int i=0;i<3;i++){
        cin>>x>>y;
        for(int j=x;j<y;j++){
            m[j]++;
        }
    }
    for(int i=0;i<=100;i++){
        if(m[i]==1) ans+=a;
        if(m[i]==2) ans+=b*2;
        if(m[i]==3) ans+=c*3;
    }
    cout<<ans;
}