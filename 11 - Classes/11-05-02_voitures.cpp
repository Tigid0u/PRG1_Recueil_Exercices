#include "11-05-02_voitures.hpp"
#include <iostream>

using namespace std;

double Voiture::prixEssence = 1.7;

Voiture::Voiture(double capaciteReservoir, double consoMoyenne): capaciteReservoir(capaciteReservoir), consoMoyenne(consoMoyenne), contenuReservoir(capaciteReservoir){}

double Voiture::getPrixEssence(){
    return prixEssence;
}

void Voiture::setPrixEssence(double prix){
    prixEssence = prix;
}

double Voiture::effectuerTrajet(double distance){
    double carburantConsomme = distance / 100.0 * this->consoMoyenne;
    this->contenuReservoir-=carburantConsomme;
    while(this->contenuReservoir <= 0) this->contenuReservoir += this->capaciteReservoir;

    return carburantConsomme*this->prixEssence;
}

void afficherVoiture(const Voiture & v){
    cout << "Capacite du reservoir [l]\t: " << v.capaciteReservoir << endl;
    cout << "Consommation moyenne [l/100km]\t: " << v.consoMoyenne << endl;
    cout << "Nb litres restants\t\t: " << v.contenuReservoir << endl << endl;
}

void afficherCoutTrajet(double prix){
    cout << "Cout du trajet : " << prix << " Frs"<< endl << endl;
}

void afficherPrixEssence(double prix){
    cout << "Prix de l'essence : " << Voiture::getPrixEssence() << " Frs" << endl << endl;
}