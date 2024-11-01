#include<iostream>
#include<iomanip>
using namespace std;
int main (){
    long long a;
    cin >> a;
    cout << 2*a<< endl;
    cout << " "<< endl;
    cout << 10*a << endl;
    cout << " "<< endl;
    cout << a/2 << endl;
    cout << " "<< endl;
    cout << fixed << setprecision(3) << (double)a/2 << endl;
    return 0;
}
