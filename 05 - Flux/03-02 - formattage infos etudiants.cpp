#include <iostream>
#include <iomanip>

using namespace std;

void afficherInfos(string nomComplet, int age, double note_math, double note_prg, bool admis, double moyenne){
	int wCol1 = nomComplet.size()+5, wCol2 = 3, wCol3 = 11, wCol4 = 15, wCol5 = 10;
	int totalW = wCol1 + wCol2 + wCol3 + wCol4 + wCol5;
	//titre
	cout << setw(wCol1) << setfill(' ') << left << "Nom";
	cout << setw(wCol2) << setfill(' ') << right << "Age";
	cout << setw(wCol3) << setfill(' ') << right << "Note Math";
	cout << setw(wCol4) << setfill(' ') << right << "Note PRG1";
	cout << setw(wCol5) << setfill(' ') << right << "Admis";
	cout << endl;
	
	//Séparation
	cout << setw(totalW) << setfill('-') << "-" << endl;
	
	//Infos étudiant
	cout << setw(wCol1) << setfill(' ') << left << nomComplet;
	cout << setw(wCol2) << setfill(' ') << right << age;
	cout << setw(wCol3) << setfill(' ') << right << note_math;
	cout << setw(wCol4) << setfill(' ') << right << note_prg;
	cout << setw(wCol5) << setfill(' ') << right << (admis ? "Oui" : "Non");
	cout << endl;
	
	//Séparation
	cout << setw(totalW) << setfill('-') << "-" << endl;
	
	//Autres infos
	cout << "Moyenne : " << moyenne << endl;
	cout << "Resultat : " << (admis ? "Admis": "Pas admis") << endl;
}

int main(){
	afficherInfos("Fouad Hanna", 19, 5.2, 5.3, true, 5.25);
	return 0;
}