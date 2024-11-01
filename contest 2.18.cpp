#include<bits/stdc++.h>
using namespace std;
int main(){
	char kitu;
	cin >> kitu;
	if(kitu>='a'&&kitu<='z'){
		kitu-=32;
		cout << kitu << endl;
	}
	else if(kitu>='A'&&kitu<='Z'){
		kitu+=32;
		cout << kitu << endl;
	}
	else{
		cout << kitu << endl;
	}
	return 0;
}
