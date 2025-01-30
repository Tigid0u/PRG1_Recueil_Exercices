#include <iostream>

using namespace std;

string compress(const string & s){
	string result = "";
	char previous = s[0];
	int counter = 1;
	for (int i = 1; i < s.size(); i++){
		if(s[i] == previous) counter ++;
		else {
			result += previous;
			if(counter != 1) result += to_string(counter);
			counter = 1;
		}
		previous = s[i];
	}
	//Add last element
	result += previous;
	if(counter != 1) result += to_string(counter);
	return result;
}

int main(){
	string s[] = {"aabcccccaaab", "abcdef", "aaAAaaa", "abbbbaaa"};
	for(const string & e:s){
		cout << "\"" << e << "\" = " << compress(e) << endl;
	}
	return 0;
}