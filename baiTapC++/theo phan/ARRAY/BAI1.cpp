// Min-Max-Form 
#include <bits/stdc++.h> 
using namespace std; 
void Solution(int A[], int n) {     
    int temp[n];//tao mang temp gom n phan tu 
    int small=0, large=n-1; //thiet lap chi so nho va lon
    int flag = true; //tao co trang thai
    for (int i=0; i<n; i++) { 
        if (flag) 
            temp[i] = A[large--]; 
        else
            temp[i] = A[small++];   
        flag = !flag; 
    }   
    // tra lai mang A[] 
    for (int i=0; i<n; i++) {
        A[i] = temp[i]; 
        cout<<A[i]<<" ";
	}
    cout<<endl;
}  
// Driver program to test above function 
int main() { 
	int *A, T, n;cin>>T;	
    //int A[] = {1, 2, 3, 4, 5, 6}; 
    while(T--){
    	cin>>n;A = new int[n];
    	for(int i=0; i<n; i++) cin>>A[i];
    	Solution(A, n); delete A;
	}
} 

