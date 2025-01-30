#include <iostream>
#include <vector>
#include <span>
#include <array>

using namespace std;

template <typename T, typename iterator1,typename iterator2>
vector<T> merge(iterator1 beg1, iterator1 end1,iterator2 beg2, iterator2 end2){
	vector<T> result;
	while(beg1 != end1 && beg2 != end2){
		result.push_back(*beg1);
		result.push_back(*beg2);
		++beg1;
		++beg2;
	}
	result.insert(result.end(), beg1, end1);
	result.insert(result.end(), beg2, end2);
	return result;
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
	vector<int> result = merge<int>(v.begin(), v.end(), a.begin(), a.end());
	cout << "vector\t\t:" << span(v) << endl;
	cout << "array\t\t:" << span(a) << endl;
	cout << "resultat\t:" << span(result) << endl;
}