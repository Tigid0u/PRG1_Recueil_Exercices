#include <iostream>

using namespace std;

void parseToInt(string roman, int decimal[], size_t size){
	for(size_t i = 0; i < size; i++){
		int digit;
		switch(roman[i]){
			case 'I':
				digit = 1;
				break;
			case 'V':
				digit = 5;
				break;
			case 'X':
				digit = 10;
				break;
			case 'L':
				digit = 50;
				break;
			case 'C':
				digit = 100;
				break;
			case 'D':
				digit = 500;
				break;
			case 'M':
				digit = 1000;
				break;
			default:
				digit = 0;
		}
		decimal[i] = digit;
	}
}

int romanToDec(string roman){
	size_t size = roman.size();
	if(!size) return 0;
	int decimal[size];
	parseToInt(roman, decimal, size);
	
	int previous = 0, resultat = 0;
	for(int i = size-1; i >= 0; i--){
		if(previous > decimal[i]) resultat -= decimal[i];
		else resultat += decimal[i];
		previous = decimal[i];
	}
	return resultat;
}

int main(){
	cout << "I = " << romanToDec("I") << endl;
	cout << "II = " << romanToDec("II") << endl;
	cout << "III = " << romanToDec("III") << endl;
	cout << "IV = " << romanToDec("IV") << endl;
	cout << "V = " << romanToDec("V") << endl;
	cout << "VI = " << romanToDec("VI") << endl;
	cout << "VII = " << romanToDec("VII") << endl;
	cout << "VIII = " << romanToDec("VIII") << endl;
	cout << "IX = " << romanToDec("IX") << endl;
	cout << "X = " << romanToDec("X") << endl;
	cout << "MMMMDCCCLXXXVIII = " << romanToDec("MMMMDCCCLXXXVIII") << endl;
	return 0;
}