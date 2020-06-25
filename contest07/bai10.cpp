// so sanh hai bieu thuc

#include<bits/stdc++.h>

using namespace std;

string sunn(string s){
    stack<char> mincy;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            if (mincy.empty())
                continue;
            else if (mincy.top() == '-')
            {
                int j = i + 1;
                while (s[j] != '(' && s[j] != ')' && j < s.size())
                {
                    if (s[j] == '-')
                        s[j] = '+';
                    else if (s[j] == '+')
                        s[j] = '-';
                    j++;
                }
            }
        }
        else if (s[i] == ')')
            continue;
        else
            mincy.push(s[i]);
    }
    string ans = "";
    while (!mincy.empty())
    {
        ans = mincy.top() + ans;
        mincy.pop();
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        //cout<<ans;
        if (sunn(s1)==sunn(s2))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}