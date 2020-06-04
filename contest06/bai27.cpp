// sắp xếp chọn

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n + 5];
    int min;
    for (int i = 0; i < n;i++)
        cin >> a[i];
    for (int i = 0; i < n-1;i++){
        cout << "Buoc " << i + 1 << ": ";
         min = i;
        for (int j = i + 1; j < n;j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        swap(a[min], a[i]);
        for (int k = 0; k < n;k++){
            cout << a[k] << " ";
        }
        cout << endl;
    }
}