#ifndef ARETE_H
#define ARETE_H
#include <iostream>

#include <math.h>
#include <Sommet.h>


class Arete
{
    public:
        Arete();
        ~Arete();

        int getPoids();
        std::pair<Sommet*, Sommet*> getVect();

        void setPoids(int poids);
        void setVect(std::pair<Sommet*, Sommet*> som);

    private:
        int m_poids;
        std::pair<Sommet*, Sommet*> m_vect;
};

#endif // ARETE_H
