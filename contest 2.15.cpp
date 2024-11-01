#include<bits/stdc++.h>
using namespace std;
int main (){
    double a,b,c,d;
    cin >>a>>b>>c>>d;
    if((a+b+2*c+3*d)/7>=8){
        cout << "GIOI" << endl;
    }
    else if((a+b+2*c+3*d)/7>=6.5 && (a+b+2*c+3*d)/7<8 ){
        cout << "KHA" << endl;
    }
    else if((a+b+2*c+3*d)/7>=5 && (a+b+2*c+3*d)/7<6.5){
        cout << "TRUNG BINH" << endl;
    }
    else {
        cout << "YEU" << endl;
    }
    return 0;
}
