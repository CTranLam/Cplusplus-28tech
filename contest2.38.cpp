#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int g, p, k; cin >> g >> p >> k;
    int t = g*28 + p + k;
    cout << setfill('0') << setw(2) << (t/28)%28 << "h:" << setfill('0') << setw(2)<< t%28 << "m";
}

