#include<iostream>

using namespace std;

bool listerCaracteres(char debut, char fin){
	if(debut > fin) return false;
	while(debut < fin){
		cout << debut;
		debut++;
	}
	return true;
}

int main(){
	bool b;

	cout << "1) 'A' => 'A' : ";
	b = listerCaracteres('A', 'A');
	cout << boolalpha << '\t' << b << endl;

	cout << "2) 'A' => 'C' : ";
	b = listerCaracteres('A', 'C');
	cout << '\t' << b << endl;

	cout << "3) 'B' => 'A' : ";
	b = listerCaracteres('B', 'A');
	cout << '\t' << b << endl;

	cout << "4) '0' => '9' : ";
	listerCaracteres('0', '9');
	cout << endl;

	cout << "5) 65  => 66  : ";
	listerCaracteres(65, 66);
	cout << endl;

	cout << "6) 147 => 155 : ";
	listerCaracteres('\x93', '\x9B');
	cout << endl;

	cout << "7) 120 => 127 : ";
	listerCaracteres(120, 127);
	cout << endl;

	cout << "8) 120 => 140 : ";
	b = listerCaracteres(120, 140);
	cout << '\t' << b << endl;

	cout << endl;
	cout << "/!\\ DANGER" << endl;
	cout << "\tint(char(65))  : " << int(char(65))  << endl
		<< "\tint(char(127)) : " << int(char(127)) << endl
		<< "\tint(char(128)) : " << int(char(128)) << endl;
	cout << ".. sera vu plus tard dans le cours."   << endl;

	cout << endl;
	cout << "Fin des tests" << endl;
	return 0;
}