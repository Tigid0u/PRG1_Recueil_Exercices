#ifndef Voiture_H
#define Voiture_H

class Voiture{
    private:
        double capaciteReservoir, consoMoyenne, contenuReservoir;
        static double prixEssence;
    public:
        //constructeurs
        Voiture(double capaciteReservoir, double consoMoyenne);
        //getters et setters
        static double getPrixEssence();
        static void setPrixEssence(double prix);
        double effectuerTrajet(double distance);

        //fonctions amies
        friend void afficherVoiture(const Voiture & v);
};

void afficherPrixEssence(double prix);
void afficherCoutTrajet(double prix);

#endif