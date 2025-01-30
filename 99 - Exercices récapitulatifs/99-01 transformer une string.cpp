#include <iostream>
#include <cctype>

using namespace std;

int transformer(string & s, string a, string b){
	int remplacements = 0;
	for(size_t i = 0; i < s.size(); i++){
		for(size_t j = 0; j < a.size(); j++){
			if(s[i] == tolower(a[j])){
				s[i] = tolower(b[j]);
				remplacements++;
			}
			else if(s[i] == toupper(a[j])){
				s[i] = toupper(b[j]);
				remplacements++;
			}
		}
	}
	return remplacements;
}

int main() {
   string s = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Phasellus facilisis at dolor eget congue. Duis in lacus placerat ante consectetur tempor. Aliquam lorem nunc, laoreet quis feugiat accumsan, vulputate vitae justo.";
   cout << transformer(s,"abcdefgh.!,:","fghabcde!,:.") << endl;
   cout << s << endl;
   cout << transformer(s,"fghabcde!,:.","abcdefgh.!,:") << endl;
   cout << s << endl;
}