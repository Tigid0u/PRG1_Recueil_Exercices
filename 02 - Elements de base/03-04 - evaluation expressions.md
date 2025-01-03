# Evaluation d'expressions - Opérateurs logiques

Que va afficher le programme C++ suivant ?

~~~cpp

#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

   int i, j, k;

   i = j = k = 1;
   i += j += k;
   cout << "A : i = " << i << " j = " << j << " k = " << k << endl;

   i = 3; j = 2;
   k = i++ > j || j++ != 3;
   cout << "B : i = " << i << " j = " << j << " k = " << k << endl;
   
   i = 3; j = 2;
   k = i++ < j || j++ != 3;
   cout << "C : i = " << i << " j = " << j << " k = " << k << endl;

   i = 3; j = 2;
   k = ++i == 3 && ++j == 3;
   cout << "D : i = " << i << " j = " << j << " k = " << k << endl;

   i = 3; j = 2;
   k = ++i > 3 && ++j == 3;
   cout << "E : i = " << i << " j = " << j << " k = " << k << endl;
     
   return EXIT_SUCCESS;
}


~~~

**Réponse:**

A: i = 3 j = 2 k = 1

B: i = 4 j = 2 k = 1

C: i = 4 j = 3 k = 1

D: i = 4 j = 2 k = 0

E: i = 4 j = 3 k = 1



<details>
<summary>Solution</summary>
<ul>
<li> A : i = 3 j = 2 k = 1</li>
<li>B : i = 4 j = 2 k = 1</li>
<li> C : i = 4 j = 3 k = 1</li>
<li> D : i = 4 j = 2 k = 0</li>
<li> E : i = 4 j = 3 k = 1</li>
</ul>
</details>