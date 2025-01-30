#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main(){
	array<int,10> a = {1,2,3,4,5,6,7,8,9,10};
	pair<int,int> inter = {3,6};
	auto count = count_if(a.begin(),a.end(),[&inter](auto val){
		return((val >= inter.first) && (val <= inter.second));
	});
	
	cout << "Nb elements in interval [" << inter.first << ";" << inter.second << "] = " << count << endl;
	return 0;
}