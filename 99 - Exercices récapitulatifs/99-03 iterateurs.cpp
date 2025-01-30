#include <iostream>
#include <vector>
#include <utility>
#include <functional>

using namespace std;

template<typename iter, typename pred>
pair<iter,iter> plus_long_sequence_croissante(iter begin, iter end, pred bpred){
	pair<iter,iter> result(end,end); //default if no sequence found is {end,end}
	auto dist = distance(begin,begin); //intit dist to 0;
	auto start = begin;
	begin++;
	while(begin!=end){
		if(!bpred(*start, *begin)){
			if(distance(start,begin)> dist){
				result.first = start;
				result.second = begin;
				dist = distance(start, begin);
			}
			start = begin;
		}
		begin++;
	}
	return result;
}
template<typename iter>
pair<iter, iter> plus_long_sequence_croissante(iter first, iter last) {
   return plus_long_sequence_croissante(first, last, less<typename iter::value_type>{});
}

int main() {
   vector<int> v{6, 3, 4, 5, 4, 3, 1, 2, 2, 3, 4, 3, 7};

   cout << "Plus long sequence croissante (1): ";
   auto r1 = plus_long_sequence_croissante(v.begin(), v.end());
   for (auto it = r1.first; it != r1.second; ++it)
      cout << *it << ' ';

   cout << "\nPlus long sequence croissante (2): ";
   auto r2 = plus_long_sequence_croissante(v.cbegin(), v.cend(), less<int>{});
   for (auto it = r2.first; it != r2.second; ++it)
      cout << *it << ' ';

   cout << "\nPlus long sequence décroissante : ";
   auto r3 = plus_long_sequence_croissante(v.begin(), v.end(), greater<int>{});
   for (auto it = r3.first; it != r3.second; ++it)
      cout << *it << ' ';

   cout << endl;
}