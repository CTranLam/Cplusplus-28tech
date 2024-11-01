#include<bits/stdc++.h>
using namespace std;
int main(){
    long long c1, c2 , c3 , c4 , c5 ;
    cin >> c1 >> c2 >> c3 >> c4 >> c5 ;
    long long s=c1+c2+c3+c4+c5;
    if(s%5==0 && s/5 !=0){
    	cout << s/5 << endl;
	}
	else{
		cout << -1 << endl;
	}
	return 0;
}
