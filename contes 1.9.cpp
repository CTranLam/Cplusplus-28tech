#include<iostream>
#include<iomanip>
using namespace std;
int main (){
	double a;
	cin >> a;
	cout << (int)a << endl;
	cout << fixed << setprecision(2)<<a-int(a)<<endl;
	return 0;
}
