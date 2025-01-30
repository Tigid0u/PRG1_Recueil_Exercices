#include <iostream>

using namespace std;

string milieu(const string & s){
	size_t taille = s.size();
	bool impair = taille % 2;
	if(impair) return s.substr(taille/2,1);
	else return s.substr(taille/2-1,2);
}

int main(){
	cout << "milieu ABC: " << milieu("ABC") << endl;
	cout << "milieu ABCD: " << milieu("ABCD") << endl;
	return 0;
}