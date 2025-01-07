#include "13-01-01_coord.hpp"
#include <iostream>

using namespace std;


template<typename T>
Coord<T>::Coord(): x(0), y(0){}

template<typename T>
Coord<T>::Coord(T x, T y): x(x), y(y){}

template<typename T>
void Coord<T>::afficher()const{
    cout << "("<< this->x << ", " << this->y << ")";
}
template<typename T>
void Coord<T>::setCoord(T x, T y){
    this->x = x;
    this->y = y;
}

template<typename T>
void Coord<T>::deplacer(T offsetX, T offsetY){
    this->x += offsetX;
    this->y += offsetY;
}
template<typename T>
T Coord<T>::getX(){
    return this->x;
}
template<typename T>
T Coord<T>::getY(){
    return this->y;
}