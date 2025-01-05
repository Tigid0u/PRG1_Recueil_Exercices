#include <iostream>
#include <vector>
#include <span>
#include <array>

using namespace std;

template <typename T, typename iterator1, typename iterator2>
vector<T> concatVectors(iterator1 aBeg, iterator1 aEnd, iterator2 bBeg, iterator2 bEnd){
    vector<T> v(aBeg, aEnd);
    v.insert(v.end(), bBeg, bEnd);
    return v;
}

template <typename T>
ostream& operator<<(ostream& os, const span<T> & s){
    os << "[";
    for (size_t i=0; i<s.size(); ++i) {
        if (i) os << ", ";
        os << s[i];
    }
    return os << "]";
}

int main(){
    vector v {11, 12, 13};
    array  a {21, 22, 23, 24, 25};

    cout << "vector   : " << span<int>(v) << endl;
    cout << "array    : " << span<int>(a) << endl;

    vector r = concatVectors<int>(v.begin(), v.end(),
                                a.begin(), a.end());

    cout << "resultat : " << span<int>(r) << endl;

    return 0;
}