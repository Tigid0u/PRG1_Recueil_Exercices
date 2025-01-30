#include <iostream>

using namespace std;

int fibo(int n){
	if(n < 2) return n;
	return fibo(n-1) + fibo(n-2);
}

int main(){
	cout << "F2 = " << fibo(2) << endl;
	cout << "F4 = " << fibo(4) << endl;
	cout << "F6 = " << fibo(6) << endl;
	cout << "F7 = " << fibo(7) << endl;
	return 0;
}