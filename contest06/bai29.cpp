// sắp xếp nổi bọt

#include<bits/stdc++.h>

using namespace std;
bool ok(int a[],int n){
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
            return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    int a[n + 5];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    bool check = false;
    int dem = 0;
    for (int i = 0; i < n - 1; i++)
    {
        check = false;
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1]){
                check = true;
                swap(a[j], a[j + 1]);
            }
        }
        if(check){
            dem++;
            cout << "Buoc " << dem << ": ";
            for (int k = 0; k < n; k++)
            {
                cout << a[k] << " ";
            }
            cout << endl;
        }
    }
}