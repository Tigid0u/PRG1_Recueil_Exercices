#include <iostream>

using namespace std;

int main(){
	string s;
	cout << "Entrez un nombre entier (>= 0) : ";
	cin >> s;
	cout << endl << "Nombre saisi\t\t: " << s << endl;
	cout << "Nombre de chifffres\t: " << s.size()<< endl;
	cout << "Premier chiffre\t\t: " << s.front() << endl;
	cout << "Dernier chiffre\t\t: " << s.back() << endl;
	return 0;
}