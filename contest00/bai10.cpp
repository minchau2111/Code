// chuẩn hoá xâu
// viết lại họ tên chữ cái đầu viết hoa...

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        while(s[0]==' ') s.erase(0,1);
        while(s[(s.length())-1]==' ') s.erase(s.length()-1,1);
        for(int i=0;i<s.length();i++){
            if((s[i]==' ') && (s[i+1]==' ')){
                s.erase(i,1);
                i--;
            }
        }
        for(int i=0;i<s.length();i++){
            if(s[i]>='A' && s[i]<='Z') s[i]+=32;
        }
        if(s[0]>='a' && s[0]<='z') s[0]-=32;
        for(int i=1;i<s.length();i++){
            if(s[i]==' '){
                i++;
                if(s[i]>='a' && s[i]<='z') s[i]-=32;
            } 
        }
        cout<<s;
        cout<<endl;
    }
}