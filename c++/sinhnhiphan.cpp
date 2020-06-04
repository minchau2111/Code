#include<bits/stdc++.h>

using namespace std;
 
int k , n ;
int a[100000] ;
void printResult() {
    for(int i =1 ; i <=k ; i++) {
        cout<<a[i]<<" " ;
     }
     cout<<endl ;
}
void sinh() {
    // sinh cau hinh dau tien
    for(int i =1 ; i <=k ; i++) {
        a[i] =1 ;
    }
    printResult() ;
 	//    sinh cau hình tiep theo
     int j = k ;
    while(a[1]<n) {
        if(a[j]==n) {
            j-- ;
        }
        a[j]++ ;
        printResult() ;
    }
 
}
 
int main()
{
    cin>>k>>n ;
    if(k<0 || n < 0 ) {
        cout<<"Loi: k,n >0"<<endl ;
    }
    else {
        sinh() ;
    }
 
    return 0;
}
