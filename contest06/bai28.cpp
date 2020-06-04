// sắp xếp chèn

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> p;
    for (int i = 0; i < n;i++){
        p.push_back(a[i]);
        sort(p.begin(), p.end());
        cout << "Buoc " << i << ": ";
        for (int j = 0;j<p.size();j++){
            cout << p[j] << " ";
        }
        cout << endl;
    }

}