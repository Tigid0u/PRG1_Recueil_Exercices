#include <iostream>

using namespace std;

int main(){
    int var1 = 1;
    int& ref1 = var1;

    //int& ref2; => impossible, une référence doit toujours être initialisée;

    var1 = 2;
    ref1 = 3;

    cout << var1 << endl;

    cout << ref1 << endl;

    //la déclaration de ref1 est identique à la déclaration d'un pointeur constant
    // int* const ref1 = &var1 serait la déclaration correspondante

    //la déclaration d'une référence constante correspond à la déclaration suivante:
    //const int* const csteRef = &var1;

    return 0;
}