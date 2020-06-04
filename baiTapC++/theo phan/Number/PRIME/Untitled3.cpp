// dua ra cac uoc nguyen to va luy thua 
#include<bits/stdc++.h> 
using namespace std; 
  
// Using SieveOfEratosthenes to find smallest prime 
// factor of all the numbers. 
// For example, if N is 10, 
// s[2] = s[4] = s[6] = s[10] = 2 
// s[3] = s[9] = 3 
// s[5] = 5 
// s[7] = 7 
//tim uoc so nguyen to nho nhat cua tat ca cac so 2,3,..,N
void Eratosthenes(int N, int s[]) { 
    // Create a boolean array "prime[0..n]" and 
    // initialize all entries in it as false. 
    vector <bool> prime(N+1, false);   
    // Initializing smallest factor equal to 2 
    // for all the even numbers 
    //uoc so nguyen to nho nhat cua cac so chan
    for (int i=2; i<=N; i+=2) 
        s[i] = 2;   
    // uoc so nguyen to nho nhat cua cac so le
    for (int i=3; i<=N; i+=2)  { 
        if (prime[i] == false) { //neu i la so nguyen to           			 
            s[i] = i; //uoc so nguyen to nho nhat cua i la chinh no  
            // uoc so nguyen to nho nhat cua cac so chia het cho i 
            for (int j=i; j*i<=N; j+=2) { 
                if (prime[i*j] == false) { 
                    prime[i*j] = true; 
                    s[i*j] = i; //uoc so nguyen to nho nhat
                } 
            } 
        } 
    } 
}   
// uoc so nguyen to va luy thua cua no
void PrimeFactors(int N) { 
    int s[N+1]; //mang luu cac uoc so nguyen to nho nhat      
    Eratosthenes(N, s); //dien vao s cac uoc so nguyen to nho nhat    
    int curr = s[N];  // uoc so nguyen to dau tien cua N la S[n]
    int cnt = 1;   // luy thua dau tien cua s[N]  
    // dua ra luy thua cua no
    while (N > 1) { 
        N = N/s[N]; //chia cho uoc so nguyen to nho nhat 
        // N is now N/s[N].  If new N als has smallest 
        // prime factor as curr, increment power 
        if (curr == s[N]) { //neu uoc so nhat van khong doi
            cnt++; //tang luy thua
            continue; //lam lai tu dau
        }   
        cout<<curr<<" "<<cnt<< " ";   
        // Update current prime factor as s[N] and 
        // initializing count as 1. 
        curr = s[N]; //cap nhat lai uoc nguyen to nho nhat
        cnt = 1; //thiet lap luy thua la 1
    } 
    cout<<endl;
} 
  
//Driver Program 
int main(void ) { 
    int N, T; cin>>T;
	while(T--){
		cin>>N; PrimeFactors(N);
	} 
}
