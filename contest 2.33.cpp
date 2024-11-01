#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,n;
    cin >> a >> b >> c>> n;
    long long s=n+a+b+c;
    if(s%3==0&&s/3 >=a&&s/3 >=b&&s/3 >=c){
        cout << "YES" <<endl;
    } 
    else {
        cout << "NO" << endl;
    }
    return 0;
}
