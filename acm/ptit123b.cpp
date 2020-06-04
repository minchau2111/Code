// đếm số lần lặp
// phần tử thứ k mới sẽ bằng |ak-a(k+1)|

#include<bits/stdc++.h>

int n;
int a[n+5];

using namespace std;

bool islast(){
    for(int i=0;i<n;i++){
        if(a[i]!=a[i+1]) return false;
    }
    return true;
}

