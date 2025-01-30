#include <iostream>

using namespace std;

int facto(int n){
	if(n == 0) return 1;
	return n * facto(n-1);
}

int main(){
	cout << "3! = " << facto(3) << endl;
	cout << "5! = " << facto(5) << endl;
	cout << "10! = " << facto(10) << endl;
	return 0;
}