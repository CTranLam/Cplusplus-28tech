#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b;
    long long n;
    cin >> a >> b >> n;
    if(a<=b/2){
    	cout << a*n << endl;
	}
	else if(a>b/2&&n%2==0){
		cout << b*n/2 << endl;
	}
	else{
		cout << b * (n-1)/2 + a << endl;
	}
	return 0;
}
