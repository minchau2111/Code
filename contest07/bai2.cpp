
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int q;
    cin >> q;
    cin.ignore();
    int a[100005] = {0};
    int n = 0;
    while (q--)
    {
        string s;
        getline(cin, s);
        // cout << s << endl;
        if (s.size() >= 6)
        {
            int x = 0;
            for (int i = 5; i < s.size(); i++)
            {
                x = x * 10 + (s[i] - '0');
            }
            // cout << x << endl;
            a[n++] = x;
        }
        if (s.size() == 3)
        {
            if (n != 0)
                n--;
        }
        if (s.size() == 5)
        {
            if (n == 0)
                cout << "NONE";
            else
            {
                cout << a[n-1] << " ";
            }
            cout << endl;
        }
    }
}