// số nhỏ nhất sao cho có d chữ số và có tổng các chữ số =s

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int s,d;
        cin>>s>>d;
       string x="";
       if(s>(int)9*d) cout<<"-1";
       else{
            s--;
            for(int i=0;i<d;i++){
                if(s>9){
                    x='9'+x;
                    s-=9;
                }
                else if(s<=9){
                    x=(char)(s+'0')+x;
                    s=0;
                }
            }
            x[0]++;
            cout<<x;
       }
       cout<<endl;
    }
}