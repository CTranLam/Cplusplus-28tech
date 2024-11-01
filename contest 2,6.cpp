#include<bits/stdc++.h>
using namespace std; 
int main(){
    int a;
    cin >> a;
    if(a%2==0){
        cout << "YES" << endl;
    }
    else {
         cout << "NO" << endl;
    }
    if((a%3==0)&&(a%5==0)){
        cout << "YES" << endl;
    }
    else {
         cout<< "NO" << endl;
    }
    if((a%3==0)&&(a%7!=0)){
        cout << "YES" << endl;
    }
    else {
        cout<< "NO" << endl;
    }
    if((a%3==0)||(a%7==0)){
        cout << "YES" << endl;
    }
    else {cout<< "NO" << endl;
    }
    if((a>30)&&(a<50)){
        cout << "YES" << endl;
    }
    else {
        cout<< "NO" << endl; 
    }
    if((a>=30)&&(a%2==0||a%3==0||a%5==0)){
        cout << "YES" << endl; 
    }
    else {
        cout<< "NO" << endl; 
    }
    int n = a%10 ; 
    if ((a>=10)&&(a<=99)&&(n==2||n==3||n==5||n==7)){
    cout << "YES" << endl;
    }
    else {
         cout<< "NO" << endl; 
    }  
    if ((a<=100)&&(a%23==0)) {
    cout << "YES" << endl;    
    }
    else {
         cout<< "NO" << endl; 
    }  
    if((a<=10)||(a>=20)) {
       cout << "YES" << endl;    
    } 
    else { 
          cout<< "NO" << endl; 
    } 
    if((n%3==0)){
    cout << "YES" << endl;    
    } 
    else {
        cout<< "NO" << endl; 
    } 
    return 0;
}
    
	
	
	
