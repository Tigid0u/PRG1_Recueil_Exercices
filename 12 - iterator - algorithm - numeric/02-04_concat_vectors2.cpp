#include <iostream>
#include <vector>
#include <span>
#include <array>

using namespace std;

// template <typename T, typename iterator1, typename iterator2>
// vector<T> concatVectors(iterator1 aBeg, iterator1 aEnd, iterator2 bBeg, iterator2 bEnd){
    // vector<T> v(aBeg, aEnd);
    // v.insert(v.end(), bBeg, bEnd);
    // return v;
// }

template <typename T, typename iterator1, typename iterator2>
vector<T> concat_tab(iterator1 begin1, iterator1 end1, iterator2 begin2, iterator2 end2){
	vector<T> v1(begin1, end1), v2(begin2, end2);
	v1.insert(v1.end(), v2.begin(), v2.end());
	return v1;
}

template <typename T, size_t N>
std::ostream& operator<<(std::ostream& os, std::span<T, N> s) {
    os << "[";
    if (!s.empty()) {
        for (size_t i = 0; i < s.size() - 1; ++i) {
            os << s[i] << ", ";
        }
        os << s.back();
    }
    os << "]";
    return os;
}

int main(){
	vector<int> v = {11,12,13};
	array<int,5> a = {21,22,23,24,25};
	int ar[] = {1,2,3,4,5};
	vector<int> result = concat_tab<int>(v.begin(), v.end(), ar, ar+5);
	cout << "vector\t\t:" << span(v) << endl;
	cout << "array\t\t:" << span(ar) << endl;
	cout << "resultat\t:" << span(result) << endl;
}