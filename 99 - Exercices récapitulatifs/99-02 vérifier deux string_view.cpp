#include <iostream>
#include <algorithm>
#include <string_view>
#include <cctype>

using namespace std;

bool verifier(string_view swA, string_view swB){
	auto a = string(swA), b = string(swB);
	transform(a.begin(), a.end(), a.begin(), ::tolower);
	transform(b.begin(), b.end(), b.begin(), ::tolower);
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	a.erase(unique(a.begin(), a.end()),a.end());
	b.erase(unique(b.begin(), b.end()),b.end());
	
	return swA.size() == a.size() and swB.size() == b.size() and a == b;
}

void tester(string_view a, string_view b) {
   cout << '\"' << a << "\" "
        << (verifier(a, b) ? "" : "in") << "compatible avec "
        << '\"' << b << '\"' << endl;
}

int main() {
   tester("abcdef","FEDBAC");
   tester("abcdef","xyz123");
   tester("abcA","cAba");
}