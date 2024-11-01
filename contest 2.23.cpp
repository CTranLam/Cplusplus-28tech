#include<bits/stdc++.h>
using namespace std;
int main(){
	long long m,n;
	cin >> n >> m;
	if(((((n+1)/2) + m-1)/m)*m <= n){
		cout << ((((n+1)/2) + (m-1))/m)*m  << endl;
	}
	else {
		cout << -1 << endl;
	}
	return 0;
}
