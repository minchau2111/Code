// kiểm tra xem xâu có để đổi thành xâu mà không có hai kí tự giống nhau nằm kề nhau không

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int x;
        if(n%2==0) x=n/2;
        else x=((int) n/2)+1;
        bool check=true;
        int mark[100]={0};
        for(int i=0;i<n;i++){
            mark[s[i]-'a']++;
            if(mark[s[i]-'a']>x){
                check=false;
                break;
            }
        }
        if(check) cout<<"1";
        else cout<<"-1";
        cout<<endl;
    }
}