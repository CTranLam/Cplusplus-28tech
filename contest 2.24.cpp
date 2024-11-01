#include<bits/stdc++.h>
using namespace std;
int main(){
    long long d1 , d2 , d3;
    cin >> d1 >> d2 >> d3;
    long long x=d1+d2+d3;
    long long y=2*d1+2*d2;
    long long z=2*d1+2*d3;
    long long t=2*d2+2*d3;
    cout << min({x,y,z,t}) << endl;
    return 0;
}

