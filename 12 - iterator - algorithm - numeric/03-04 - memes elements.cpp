#include <iostream>
#include <span>
#include <algorithm>
#include <vector>

using namespace std;

template <typename T>
bool meme_elements(span<T> a, span<T> b){
	for(const T & val: a){
		if(!(count(b.begin(), b.end(), val))) return false;
	}
	for(const T & val: b){
		if(!(count(a.begin(), a.end(), val))) return false;
	}
	return true;
}

template<typename T>
bool operator==(span<T> a, span<T> b){
	for(const T & val: a){
		if(!(count(b.begin(), b.end(), val))) return false;
	}
	for(const T & val: b){
		if(!(count(a.begin(), a.end(), val))) return false;
	}
	return true;
}

int main(){
	array  a {10, 9, 8, 7, 6, 5, 4, 3, 2,1};
	vector v {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2};
	cout << (span<int>(a) == span<int>(v));
	return 0;
}