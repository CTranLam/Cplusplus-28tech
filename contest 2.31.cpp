#include<bits/stdc++.h>
using namespace std;
int main(){
	int a1,a2,a3,b1,b2,b3,n;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3>> n ;
	// ke de cup
	long long x=a1+a2+a3;
	if(x%5==0){
		cout << x/5 << endl;
}
    else{
    	cout << x/5 +1 << endl;
	}
	// e de huy chuong 
	long long y=b1+b2+b3;
	if(y%10==0){
		cout << y/10 << endl;
	}
	else{
		cout << y/10 + 1 << endl;
	}
	// xet yeu cau bai
	if(x+y<=n){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	return 0;
}
