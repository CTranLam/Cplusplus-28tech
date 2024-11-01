#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int b,a;
	cin >> b >> a;
	cout << a/b << endl;
	cout << fixed << setprecision(2) << (double)a/b << endl;
	return 0;
}
