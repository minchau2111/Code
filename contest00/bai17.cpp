// ghép hình
// cho ba hình chữ nhật với độ dài
// kiểm tra xem có thể ghép đk hành hình vuông không
// nếu có in ra YES ngược lại NO
// wrong- answer

#include <iostream>
#include <math.h>

using namespace std;
long long a,b,c,d,e,f,hv;

long long ktcp(long long x){
	long long tmp=sqrt(x);
	if(tmp*tmp==x) 
		return tmp;
	return 0;
}

void solve(){
	long long dt=a*b+c*d+e*f;
	hv=ktcp(dt);

	if(hv == 0)		cout << "NO";
	else{
		if(b==d && d==f && f==hv) cout << "YES";
		else{
			if(d==hv) {swap(a,c); swap(b,d);}
			if(f==hv) {swap(a,e); swap(b,f);}
			if(b==hv)
			{
				a=hv-a;
				if((c==a && e==a) || (d==a && e==a)|| (c==a && f==a) || (d==a && f==a))  cout<<"YES";
				else cout<<"NO";
			}		
			else cout<< "NO";
		}
	}
}

int main(){

		cin>>a>>b>>c>>d>>e>>f;
		if(a > b)	swap(a,b);
		if(c > d)	swap(c,d);
		if(e > f)	swap(e,f);
		solve();

}