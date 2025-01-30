#include <iostream>
#include <exception>

using namespace std;

void operation(double a, double b, char operation, double & resultat){
	switch(operation){
		case '+':
			resultat = a + b;
			break;
		case '-':
			resultat = a-b;
			break;
		case '*':
			resultat = a*b;
			break;
		case '/':
			if(b == 0) throw invalid_argument("Division par 0, impossible !");
			resultat = a/b;
			break;
		default:
			throw invalid_argument("Operation invalide !");
	}
}

int main(){
	double a = 2.5, b = 3.0, c = 0.0, resultat;
	try{
		operation(a,b,'+',resultat);
		cout << a << " + " << b << " = " << resultat << endl;
		operation(a,b,'-',resultat);
		cout << a << " - " << b << " = " << resultat << endl;
		operation(a,b,'*',resultat);
		cout << a << " * " << b << " = " << resultat << endl;
		operation(a,b,'/',resultat);
		cout << a << " / " << b << " = " << resultat << endl;
		operation(a,c,'/',resultat);
		cout << a << " / " << b << " = " << resultat << endl;
	}
	catch(exception & e){
		cerr << e.what() << endl;
	}
	try{
		operation(a,b,'%',resultat);
		cout << a << " % " << b << " = " << resultat << endl;
	}
	catch(exception & e){
		cerr << e.what() << endl;
	}
	
	return 0;
}