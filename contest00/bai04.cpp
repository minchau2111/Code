// phân tích thừa số nguyên tố

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        long long n;
        cin>>n;
        cout<<"Test "<<i<<": ";
        for(int i=2;i<=sqrt(n);i++){
            int dem=0;
            while(n%i==0){
                ++dem;
                n/=i;
            }
            if(dem>=1) cout<<i<<"("<<dem<<")"<<" ";
        }
        if(n>1) cout<<n<<"(1)"<<" ";
        cout<<endl;
    }
}