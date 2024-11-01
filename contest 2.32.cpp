#include<bits/stdc++.h>
using namespace std;
int main(){
    long long k2,k3,k5,k6;
    cin >> k2 >> k3 >> k5 >> k6;
    long long x,y;
    x=min({k2,k5,k6});
    y=k2-x;
    long long tong=x*256+min(k2-x,k3)*32 ;
    cout <<tong << endl;
    return 0;
}
