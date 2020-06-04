#include<iostream>
#include<math.h>
using namespace std;
const int N = 1e4+5;
long long n;
/*
    cach 1: kiem tra so nguyen to roi in ra .
    cach 2 : sang nguyen to .
    https://vnoi.info/wiki/translate/he/Number-Theory-2
    luu y : sang o ben ngoai bo test cho do ton thoi gian
*/
int isPrime[N];
void sieve(){ // sang nguyen to
    for(int i = 0 ;  i < N ; i++) isPrime[i] = 0; // khoi tao cac phan tu ban dau bang 0
    isPrime[0] = isPrime[1] = 1;
    for(int i = 2 ; i <= sqrt(N) ; i++){
        if ( isPrime[i] == 0 ){ // neu i chua duoc danh dau la 1
            for(int j = i * i ; j < N ; j += i)
                isPrime[j] = 1; // danh dau tat cac cac boi cua i < 10^4 la 1
        }
    }
    // cac so nguyen to duoc danh dau la 0.
}
void input(){
    cin >> n;
}
void solve(){
    for(int i = 1 ; i <= n/2 ;  i++){
        if ( isPrime[i] == 0 && isPrime[n-i] == 0 ){ // neu i va n - i deu la so nguyen to , in ra va dung chuong trinh
            cout << i << ' ' << n - i << endl;
            break;
        }
    }
}
int main(){
    int t=1;
    cin >> t;
    sieve(); // sang nguyen to
    while(t--){
        input();
        solve();
    }
    return 0;
}