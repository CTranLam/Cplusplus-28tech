#include<bits/stdc++.h>
using namespace std;
int main (){
    int a;cin >> a;
    if(a%400==0){
        cout << "YES" << endl;
    }
    else if((a%4==0)&&(a%100!=0)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
