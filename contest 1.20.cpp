#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a;
	cin >> a;
	cout << setw(6) << setfill('0') << a <<endl;
	cout << setw(6) << setfill('#') << a <<endl;
	return 0;
}
