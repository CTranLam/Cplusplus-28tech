#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	int x,y;
    x=a/b *b ;
		cout << x << endl;
	if(a%b==0){
		cout << a <<endl;
	}
	else{
		cout << (a/b +1 )*b << endl;
	} 
    return 0;
    
}
