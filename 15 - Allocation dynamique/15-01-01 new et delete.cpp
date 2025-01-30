#include <iostream>

using namespace std;

class C {
   int i;
public:
   C() : i(0) { cout << "CD " << flush; }
   C(int i) : i(i) { cout << "C" << i << " " << flush; }
   ~C() { cout << "D" << i << " " << flush; }
};

C* f(){
	C* pt = new C();
	return pt;
}
C* f(int i){
	C* pt = new C(i);
	return pt;
}
void g(C* pt){
	delete pt;
}

int main() {
   auto p1 = f();
   auto p2 = f(2);
   g(p2);
   p2 = f(3);
   g(p1);
   g(p2);
}

//Affichage souhaité: CD C2 D2 C3 D0 D3