#include <bits/stdc++.h>
#define i64 long long
#define fi first
#define se second
#define rz resize
#define pb push_back
#define mp make_pair
#define whatIs(a) cerr << #a " is " << (a) << endl;
 
const int N = 200005;
const long long base = 1e9+7;
const long long inf = 1e18+7;
 
using namespace std;
//kiểm tra xem co so nao tu 1 den 49 chua xuat hien khong
bool Check(int a[]){
    for(int i=1;i<50;i++){
    	//nếu chưa xuất hiện thì trả về sai
        if(a[i]==0) return false;
    }
    return true;
}
 
void Solve(){
    int n;
    while(true){
        cin>> n;
        if(n==0) break;
        int a[n+5][7]; 
        int soLanXuatHien[10000]={0}; //danh dau cho tat ca cac so tu 1 den 49 (thực ra là 10000) chưa xuat hien
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<6;j++){
                cin >> a[i][j];
                soLanXuatHien[a[i][j]]++; // danh dau so a[i][j] nhập vào đã xuất hiện
            }
        }
        if(Check(soLanXuatHien)) cout << "Yes"<<endl;
        else cout << "No"<<endl;
    }   
}
 
int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}