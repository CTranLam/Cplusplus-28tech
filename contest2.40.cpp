#include <bits/stdc++.h> 
using namespace std;
int main(){
	int a; cin >> a;
	if(a>=1000){
		cout << a*4500+1200000 << endl;
	}
	else if(a>=800 && a<1000){
		cout << a*3900+900000 << endl;
	}
	else if(a<800 && a>=500){
		cout << a*3700+800000 << endl;
	}
	else{
		cout << a*3300 << endl;
	}
return 0;	
} 
