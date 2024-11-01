#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c;
    cin >>a>>b>>c;
    if((a>0)&&(b>0)&&(c>0)&&(a+b>c)&&(b+c>a)&&(a+c>b)){
        if ((a==b&&a==c&&b==c)){
            cout << "1" << endl;
        }
        else if ((a==b&&a!=c&&b!=c)||(b!=a&&b==c&&a!=c)||(c==a&&c!=b&&a!=b)){
            cout << "2" << endl;
        }
        else if ((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a)){
            cout << "3" << endl;
        }
        else {
            cout << "4" << endl;
        }
    }
    else {
        cout << "INVALID" << endl;
    }
    return 0;
}
