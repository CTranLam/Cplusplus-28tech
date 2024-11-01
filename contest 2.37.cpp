#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,m,k; cin >> h >> m >> k;
    int z=28*h+m+k;
    if(z/28>=10 &&z%28>=10){
    	cout << z/28 <<"h:" << z%28 <<"m" << endl;
	}
	else {
		cout << setfill('0') << setw(2) << z/28<< endl;
		cout << setfill('0') << setw(2) << z%28<< endl; 
		cout << z/28 <<"h:" << z%28 <<"m" << endl;
	}
	return 0;
}
