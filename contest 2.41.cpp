#include <bits/stdc++.h> 
using namespace std;
int main(){
    long long a,b; cin >> a >> b ;
    char c; cin >> c;
    switch(c){
        case('+'):
            cout << a <<" + " << b << " = " << a+b << endl;
            break;
        case('-'):
            cout << a << " - " << b << " = " << a-b << endl;
            break;
        case('*'):
            cout << a << " * " << b << " = " << a*b << endl;
            break;
        case('/'):
            cout << fixed << setprecision(2)<< a << " / " << b << " = " << (double)a/b << endl;
            break;        
    default:{
		cout << " " << endl;
	}
}
return 0;    
}
