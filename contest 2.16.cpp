#include<bits/stdc++.h>
using namespace std;
int main (){
    char kitu;
    cin >> kitu ;
    if(kitu=='z'||kitu=='Z'){
    	cout << "a" << endl;
	}
	else if(kitu>='A' && kitu <'Z'){
		kitu += 33;
		cout << kitu<< endl;
	}
	else {
		kitu += 1;
		cout << kitu <<endl;
	}
	return 0;
}
