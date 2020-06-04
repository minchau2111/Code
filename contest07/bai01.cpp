// đưa ra show

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int st[100000];
    string s;
    int n = 0;
    while (getline(cin, s))
    {
        if (s.size() >= 6)
        {
            int x = 0;
            for (int i = 5; i < s.size(); i++){
                x = x * 10 + (s[i] - '0');
                // cout << x;
            }
            st[n++] = x;
        }
        if (s.size() == 3)
        {
            if (n != 0)
                n--;
        }
        if (s.size() == 4)
        {
            if(n==0){
                cout << "empty";
            }
            else{
                for (int i = 0; i < n; i++)
                {
                    cout << st[i] << ' ';
                }
            }
            cout << endl;
        }
    }
}