#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
	long long x;
	cin >> x;
	cout << fixed << setprecision (2) << (double)sqrt(x) << endl;
	cout << fixed << setprecision (3) << (double)cbrt(x) << endl;
	return 0;
}
