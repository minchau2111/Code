// chuyen danh sach ke sang ma tran ke

#include<bits/stdc++.h>

using namespace std;
int ke[1005][1005];
vector<int> sunn[10000];

int main(){
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n;i++){
        string s;
        getline(cin, s);
        int x = 0;
        for (int j = 0; j <= s.size();j++){
            if(s[j]==' ' || j==s.size()){
                sunn[i].push_back(x);
                x = 0;
            }
            else{
                x = x * 10 + (s[j] - '0');
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < sunn[i].size(); j++)
        {
            ke[i][sunn[i][j]] = 1;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << ke[i][j] << " ";
        }
        cout << endl;
    }
}