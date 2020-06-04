// chuẩn hoá tên viết đúng tên + đệm , họ

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
        string s1;
        int pos=0;
        for(int i=0;i<=s.length();i++){
            if(s[i]==' '){
                pos=i;
                break;
            }
        }
        for(int j=0;j<pos;j++){
                s[j]-=32;
                s1+=s[j];
        }

        for(int i=pos;i<s.length();i++){
             if(s[i]==' '){
                i++;
                if(s[i]>='a' && s[i]<='z') s[i]-=32;
            } 
        }
        for(int i=pos+1;i<s.length();i++){
            cout<<s[i];
        }
        cout<<", "<<s1<<endl;
    }
}
