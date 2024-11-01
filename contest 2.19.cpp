#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin >> m >> n;
	if(m%2==0){
		cout << (m/2)*n << endl;
	}
	else if(m%2!=0&&m%2>=1){
	    // sthua=m-(m-1)/2;
		// othua=sthua/2;
		cout << (m-1)/2 * n + (m+1)/4 << endl;
	}
	else{
		cout << (m-1)/2 * n << endl;
	}
	return 0;
}
  
