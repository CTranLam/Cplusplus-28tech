#include<bits/stdc++.h>
using namespace std; 
int main(){
    int x,y,a,b;
    cin >> x >> y >> a >> b ;
    double s = sqrt(pow(a-x,2)+pow(b-y,2));
    cout << fixed << setprecision(2)<< s << endl;
    return 0;
}
