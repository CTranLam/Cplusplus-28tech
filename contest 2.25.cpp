#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n; cin >> n ;
	if( n%100 != 0){
		long long a=(n%100) % 20;
		if(a == 0){
			cout << (n/100)+(n%100/20) << endl;
		}
		else if(a!=0){
			long long b=a%10;
			if(b==0){
				cout << (n/100)+(n%100/20)+(a/10) << endl;
			}
			else if(b!=0){
				long long c=b%5;
				if(c==0){
					cout << (n/100)+(n%100/20)+(a/10)+(b/5) << endl;
				}
				else{
					cout << (n/100)+(n%100/20)+(a/10)+(b/5) + c << endl;
				}
			}
		}
	}
	else{
		cout << n/100 << endl;
	}
	return 0;
}
