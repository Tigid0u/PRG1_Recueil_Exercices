#include <iostream>
#include <vector>

using namespace std;

using Data    = double;
using Ligne   = vector<Data>;
using Matrice = vector<Ligne>;

const Matrice notes {{4.0, 5.0, 6.0},  // Jean
                     {4.1, 5.1, 4.8},  // Marie
                     {3.5, 4.1     },  // Joshua
                     {4.5, 4.5, 4.6}}; // Ali


template <typename T>
T somme(const vector<T> & ligne){
    T somme = 0;
    for (const auto & e : ligne){
        somme += e;
    }
    return somme;
}

template <typename T>
T moyenne(const vector<T> & ligne){
    return somme(ligne)/ligne.size();
}

template <typename T>
ostream& operator<<(ostream& os, const vector<T> & v){
    os << "[";
    for (const auto & e : v){
        os << e << " ";
    }
    os << "]";
    return os;
}

template <typename T>
void statistiques(const vector<vector<T>> matrice){
    vector<T> sommes, moyennes;
    for (const auto & ligne: matrice){
        sommes.push_back(somme(ligne));
        moyennes.push_back(moyenne(ligne));
    }
    cout.precision(1);
    cout << fixed << "somme\t\t: " << sommes << endl;
    cout << "moyennes\t: " << moyennes << endl;
}



int main(){
    statistiques(notes);
    return 0;
}