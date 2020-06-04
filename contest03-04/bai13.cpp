// kiểm tra xem xâu có để đổi thành xâu hai kí tự giống nhau nằm cách nhau khoảng d

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
        string s;
        cin>>s;
        int n=s.size();
        int x;
        if(n%2==0) x=n/d;
        else x=((int)n/d)+1;
        bool check=true;
        int mark[100]={0};
        for(int i=0;i<n;i++){
            mark[s[i]-'A']++;
            if(mark[s[i]-'A']>x){
                check=false;
                break;
            }
        }
        if(check) cout<<"1";
        else cout<<"-1";
        cout<<endl;
    }
}