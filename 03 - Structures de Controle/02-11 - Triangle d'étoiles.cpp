#include <iostream>
#include <limits>

using namespace std;

int askUserInput(){
	int n;
	cout << "Hauteur du triangle (h > 0) : ";	
	cin >> n;
	while(cin.fail() || n <= 0){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << endl << "Inserer un nombre valide !" << endl;
		cout << "Hauteur du triangle (h > 0) : ";	
		cin >> n;		
	}
	return n;
}

void printTriangle(int size){
	for(int i=0; i<size; i++){
		for(int j=1; j<=size*2; j++){
			if((j >= size-i)&&(j <= size+i)) cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
}

int main(){
	int size = askUserInput();
	printTriangle(size);	
	return 0;
}