# Constructeurs de la classe string

Indiquer ce que va afficher chacune des séquences d'instructions suivantes : 

_Il se peut qu'une séquence provoque une erreur à la compilation ou à l'exécution, voire ait un comportement indéfini. Le cas échéant, répondez "Erreur à la compilation", "Erreur à l'exécution" ou "Comportement indéfini"_



1. |BC|

~~~cpp
string s1 = "ABC";
string s2(s1, 1);
cout << '|' << s2 << '|' << endl;
~~~

2. |C|

~~~cpp
string s1 = "ABC";
string s2(s1, 2, 3);
cout << '|' << s2 << '|' << endl;
~~~

3.	||
~~~cpp
string s1 = "ABC";
string s2(s1, 3, 2);
cout << '|' << s2 << '|' << endl;
~~~

4.	Erreur d'execution
~~~cpp
string s1 = "ABC";
string s2(s1, 4, 1);
cout << '|' << s2 << '|' << endl;
~~~

5.	|ABC|
~~~cpp
string s("ABC", 3);
cout << '|' << s << '|' << endl;
~~~

6.	|ABC\0|
~~~cpp
string s("ABC", 4);
cout << '|' << s << '|' << endl;
~~~

7.	Comportement indéfini
~~~cpp
string s("ABC", 5);
cout << '|' << s << '|' << endl;
~~~

8.	|AAA|
~~~cpp
string s(3, 'A');
cout << '|' << s << '|' << endl;
~~~


<details>
<summary>Solution</summary>

1. |BC|
2.	|C|
3.	||
4.	Erreur à l'exécution
5.	|ABC|
6.	|ABC\0|
7.	Comportement indéfini
8.	|AAA|

</details>