// tìm ước chung lớn nhất và bội chung nhỏ nhất

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long ucln=__gcd(a,b);
        long long bcnn=(a*b)/ucln;
        cout<<ucln<<" "<<bcnn;
        cout<<endl;
    }
}