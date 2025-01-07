#ifndef COORD_H
#define COORD_H

template<typename T>
class Coord{
    private:
        T x, y;
    public:
        Coord();
        Coord(T x, T y);
        void afficher() const;
        void setCoord(T x, T y);
        void deplacer(T offsetX, T offsetY);
        T getX();
        T getY();
};
//implémentation de la classe générique
#include "13-01-01_coord_impl.hpp"

#endif