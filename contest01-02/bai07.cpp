#include<bits/stdc++.h>
using namespace std;

int n, k, X[100], dem=0, OK=1;

void Init(){
	cin>>n;
	k=1;
	X[k]=n;
}

void Result(){
	cout<<"(";
	for(int i=1; i<k; i++)
		cout<<X[i]<<" ";
	cout<<X[k]<<") ";
}

void Next_Division(){ 
	int i = k, j, R, S,D;
	while (i> 0 && X[i]==1)
    i--; 
	if (i>0){
		X[i] = X[i] - 1;
		D = k-i+1; 
        S = D % X[i];
		R=D/X[i]; 
        k= i; 
		if (R>0){	
			for (j = i +1; j<=i+R; j++){
                X[j] = X[i];
            }
			k = k + R;
		}
		if (S>0 ){
			k = k +1; X[k] = S;
		}
	}
	else OK =0;
} 

int main() { 
	int t;
	cin>>t;
	while(t--){
		Init();
		OK = 1; 
		while (OK) { 
			Result(); 
			Next_Division();
		}
		cout<<endl;	
	}
	return 0;
}