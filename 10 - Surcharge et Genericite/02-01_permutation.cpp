#include <iostream>

using namespace std;

template <typename T>
void permutationCirculaire(T & a, T & b, T & c){
    T tmp = a;
    a = c;
    c = b;
    b = tmp;
}

int main(){

    int a = 1, b = 2, c = 3;

    cout << "a = " << a << " b = " << b << " c = " << c << endl;
    cout << "permutation a droite..." << endl;
    permutationCirculaire(a,b,c);
    cout << "a = " << a << " b = " << b << " c = " << c << endl;
    cout << "permutation a droite..." << endl;
    permutationCirculaire(a,b,c);
    cout << "a = " << a << " b = " << b << " c = " << c << endl;
    cout << "permutation a droite..." << endl;
    permutationCirculaire(a,b,c);
    cout << "a = " << a << " b = " << b << " c = " << c << endl;
    return 0;
}