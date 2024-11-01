#include<iostream>
using namespace std;
int main(){
	long long a,b;
	cin >> a >> b;
	if (b>=a){
		cout << (b-a)+1 << endl;
	}
	else if (a>=b){
		cout << (a-b)+1 << endl;
	}
	return 0;
}
