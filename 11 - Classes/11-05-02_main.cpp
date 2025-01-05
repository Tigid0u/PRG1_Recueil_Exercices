#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include "11-05-02_voitures.hpp"

using namespace std;

int main() {

    afficherPrixEssence(Voiture::getPrixEssence());
        
    Voiture::setPrixEssence(1.95);
    afficherPrixEssence(Voiture::getPrixEssence());   

    Voiture v(52, 6.7);

    afficherVoiture(v);   
    afficherCoutTrajet(v.effectuerTrajet(1000));
    afficherVoiture(v);
    afficherCoutTrajet(v.effectuerTrajet(200));
    afficherVoiture(v);

    return EXIT_SUCCESS;
}