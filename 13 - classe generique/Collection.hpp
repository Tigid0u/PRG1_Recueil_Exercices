#ifndef COLLECTION_H
#define COLLECTION_H

#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

//Pre-declaration of class Collection
template <typename T, template <class, class=std::allocator<T>> class container> class Collection;
//Pre-declaration of operator<<
template <typename T, template <class, class=std::allocator<T>> class container>
std::ostream& operator<<(std::ostream& os, const Collection<T,container>& c);

template <typename T, template <class, class=std::allocator<T>> class container>
class Collection{
	private:
		container<T> tab;
	public:
		Collection();
		void add(T element);
		void remove(T element);
		void clear();
		bool empty();
		size_t size();
		explicit operator std::string()const;
		
		//friend functions
		friend std::ostream& operator<< <T, container>(std::ostream& os, const Collection<T,container>& c);
	
};

template <typename T, template <class, class=std::allocator<T>> class container>
Collection<T, container>::Collection(){}

template <typename T, template <class, class=std::allocator<T>> class container>
void Collection<T, container>::add(T element){
	this->tab.push_back(element);
}

template <typename T, template <class, class=std::allocator<T>> class container>
void Collection<T, container>::remove(T element){
	auto it = find(this->tab.begin(), this->tab.end(), element);
	if(it!= this->tab.end()) this->tab.erase(it);
}

template <typename T, template <class, class=std::allocator<T>> class container>
void Collection<T, container>::clear(){
	this->tab.clear();
}

template <typename T, template <class, class=std::allocator<T>> class container>
bool Collection<T, container>::empty(){
	return this->tab.empty();
}

template <typename T, template <class, class=std::allocator<T>> class container>
size_t Collection<T, container>::size(){
	return this->tab.size();
}

template <typename T, template <class, class=std::allocator<T>> class container>
std::ostream& operator<<(std::ostream& os, const Collection<T,container>& c){
	os << "[";
	for(auto it = c.tab.begin(); it != c.tab.end()-1; it++){
		os << *it << ", ";
	}
	os << c.tab.back() << "]";
	return os;
}

template <typename T, template <class, class=std::allocator<T>> class container>
Collection<T,container>::operator string() const{
   std::stringstream result;
   result << "[";
   for (auto it=tab.begin(); it!=tab.end(); ++it) {
      if (it !=tab.begin()) result << ", ";
      result << *it;
   }
   result << "]";
   return result.str();
}

#endif