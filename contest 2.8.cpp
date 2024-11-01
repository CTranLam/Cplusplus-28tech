#include<bits/stdc++.h>
using namespace std;
int main (){
    long long a,b ;
    cin>> a >> b;
    cout << a+b << endl;
    cout << a-b << endl;
    cout << a*b << endl;
    if (b!=0){
        cout << fixed << setprecision(4) << (double)a/b << endl;
    }
    else{
        cout << "INVALID" << endl;
    }
    return 0;
}
