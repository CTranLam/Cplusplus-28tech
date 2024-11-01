#include<bits/stdc++.h>
using namespace std;
int main(){
    char kitu;
    cin >> kitu;
    if((kitu>='A')&&(kitu<='Z')){
        cout << "UPPER" << endl;
    }
    else if((kitu>='a')&&(kitu<='z')){
        cout <<"LOWER" <<endl;
    }
    else if((kitu>='0')&&(kitu<='9')){
        cout << "DIGIT" << endl;
    }
    else {
        cout << "SPECIAL" << endl;
    }
    return 0;
}
