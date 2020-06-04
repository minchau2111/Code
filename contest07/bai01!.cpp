// building stack
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    vector<int> mincy;
    while(cin>>s){
        if(s=="push"){
            int x;
            cin >> x; 
            mincy.push_back(x);
        }
        if(s=="show"){
            if(mincy.size()==0)
                cout << "empty";
            else{
                for (int i = 0; i < mincy.size();i++){
                    cout << mincy[i] << " ";
                }
            }
            cout << endl;
        }
        if(s=="pop")
            if(mincy.size()!=0)
                mincy.pop_back();
    }

}