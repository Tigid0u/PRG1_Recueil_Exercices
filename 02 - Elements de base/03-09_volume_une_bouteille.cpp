#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

double volBouteille(double r1, double r2, double h1, double h2, double h3){
    double cylindreBouteille = M_PI * pow(r1, 2) * h1;
    double coneTronque = (pow(r1, 2) + pow(r2, 2) + r1*r2)*h3*(M_PI/3);
    double cylindreBouchon = M_PI * pow(r2,2) * h2;
    return (cylindreBouteille + coneTronque + cylindreBouchon)/1000; //Vol en litres (dm3)
}

int main(){
    double r1,r2,h1,h2,h3;

    cout <<"Entrez le rayon du cylindre 1 [cm]      : " ;
    cin >> r1;
    cout <<"Entrez le rayon du cylindre 2 [cm]      : " ;
    cin >> r2;
    cout <<"Entrez la hauteur du cylindre 1 [cm]    : " ;
    cin >> h1;
    cout <<"Entrez la hauteur du cylindre 2 [cm]    : " ;
    cin >> h2;
    cout <<"Entrez la hauteur du tronc de cone [cm] : " ;
    cin >> h3;

    cout << endl << "La contenance de la bouteille est de " << volBouteille(r1,r2,h1,h2,h3) << " litre(s)" << endl; 
    
    return 0;
}