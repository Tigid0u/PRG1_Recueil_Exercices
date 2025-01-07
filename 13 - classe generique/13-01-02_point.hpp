#ifndef POINT_H
#define POINT_H
#include "13-01-01_coord.hpp"
template<typename T>
class Point{
    private:
        Coord<T> coord;
        string nom;
    public:
        Point();
        Point(string nom);
        Point(string nom, Coord<T> coord);
        Point(string nom, T x, T y);
        void afficher();
        void setNom(string nom);
        string getNom();
        void setCoord(Coord<T> coord);
        Coord<T> getCoord();
        void deplacer(T offsetX, T offsetY);
};
template<typename T>
Point<T>::Point(): nom(), coord() {}

template<typename T>
Point<T>::Point(string nom): nom(nom), coord() {}

template<typename T>
Point<T>::Point(string nom, Coord<T> coord): nom(nom), coord(coord) {}

template<typename T>
Point<T>::Point(string nom, T x, T y): nom(nom), coord(x,y){}

template<typename T>
void Point<T>::afficher(){
    cout << this->nom;
    this->coord.afficher();
}

template<typename T>
void Point<T>::setNom(string nom){
    this->nom = nom;
}

template<typename T>
void Point<T>::setCoord(Coord<T> coord){
    this->coord = coord;
}

template<typename T>
void Point<T>::deplacer(T offsetX, T offsetY){
    this->coord.deplacer(offsetX, offsetY);
}

template<typename T>
Coord<T> Point<T>::getCoord(){
    return this->coord;
}

template<typename T>
string Point<T>::getNom(){
    return this->nom;
}
#endif