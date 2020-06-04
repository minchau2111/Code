// penny game

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int tmp;
        cin>>tmp;
        cout<<tmp<<" ";
        string s;
        cin>>s;
        int n=s.size();
        int dem[100]={0};
        for(int i=0;i<n;i++){
            if(s[i]=='T' && s[i+1]=='T' && s[i+2]=='T') dem[0]++;
            if(s[i]=='T' && s[i+1]=='T' && s[i+2]=='H') dem[1]++;
            if(s[i]=='T' && s[i+1]=='H' && s[i+2]=='T') dem[2]++;
            if(s[i]=='T' && s[i+1]=='H' && s[i+2]=='H') dem[3]++;
            if(s[i]=='H' && s[i+1]=='T' && s[i+2]=='T') dem[4]++;
            if(s[i]=='H' && s[i+1]=='T' && s[i+2]=='H') dem[5]++;
            if(s[i]=='H' && s[i+1]=='H' && s[i+2]=='T') dem[6]++;
            if(s[i]=='H' && s[i+1]=='H' && s[i+2]=='H') dem[7]++;
        }
        cout<<dem[0]<<" "<<dem[1]<<" "<<dem[2]<<" "<<dem[3]<<" "<<dem[4]<<" "<<dem[5]<<" "<<dem[6]<<" "<<dem[7];
        cout<<endl;
    }
}