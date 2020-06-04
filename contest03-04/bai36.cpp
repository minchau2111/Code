// tích hai số nhị phân

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        long long n1=0,n2=0,tich=0;
        int x=0;
        for(int i=s1.size()-1;i>=0;i--){
            if(s1[i]=='1')
                n1+=pow(2,x);
            x++;
        }
        x=0;
        for(int i=s2.size()-1;i>=0;i--){
            if(s2[i]=='1')
                n2+=pow(2,x);
            x++;
        }
        tich=n1*n2;
        cout<<tich<<endl;
    }
}