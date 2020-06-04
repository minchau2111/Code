// mua lương thực

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,m;
        cin>>n>>s>>m;
        if(m>n || s>6 && (6*n)<(7*m)) cout<<"-1"; 
        else{
            int x=((int)s*m)/n;
            float y=((float)s*m)/n;
        // cout<<x<<" "<<y;
            if(x==y){
                if(x<=s) cout<<x;
            }
            else{
                x+=1;
                if(x<=s) cout<<x;
            }
        }
        cout<<endl;
    }
}