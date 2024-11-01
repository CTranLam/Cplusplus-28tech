#include<iostream>
#include<math.h>
using namespace std;
int main (){
	int a,b;
	cin >> a >> b ;
	swap (a,b);
	cout << (long long)128*a + (long long)97*b + 1000 << endl;
	return 0;
}
