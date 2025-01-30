#include <iostream>
#include <cctype>

using namespace std;

int main(){
	char c;
	cout << "Entrez un caractere : ";
	cin >> c;
	
	cout << endl << "Code ASCII de " << c << "\t\t\t\t: " << (int)c << endl;
	cout << "'" << c << "' est une lettre de l'alphabet\t: " << (isalpha(c) ? "vrai" : "faux") << endl;
	cout << "'" << c << "' est une lettre minuscule\t\t: " << (islower(c) ? "vrai" : "faux") << endl;
	cout << "'" << c << "' est un chiffre\t\t\t: " << (isdigit(c) ? "vrai" : "faux") << endl;
	cout << "'" << c << "' est un caractere de ponctuation\t: " << (ispunct(c) ? "vrai" : "faux") << endl;
	return 0;
}