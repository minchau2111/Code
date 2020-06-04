// tìm số nhỏ nhất và nhỏ thứ 2

#include <bits/stdc++.h>

using namespace std;

void search(int n, int a[])
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            cout << a[i] << " " << a[i + 1];
            return;
        }
    }
    cout << "-1";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        search(n, a);
        cout << endl;
    }
}