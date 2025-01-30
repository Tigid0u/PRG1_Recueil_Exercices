#include <iostream>

using namespace std;

void permutation(double& x, double & y, double & z){
	double temp = y;
	
	y = x;
	x = z;
	z = temp;
}

int main(){
	double x=2.1, y = 3.4, z = 5.0;
	cout << "x = " << x << " y = " << y << " z = " << z << endl;
	permutation(x,y,z);
	cout << "x = " << x << " y = " << y << " z = " << z << endl;
	return 0;
}