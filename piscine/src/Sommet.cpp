#ifndef ARETE_H_INCLUDED
#define ARETE_H_INCLUDED
#include <fstream>
#include "../svg/svgfile.h"
#include "Sommet.h"
#include <sstream>
#include <math.h>

class Arete
{
private:
    int m_id, m_weight;
    std::pair<Sommet*, Sommet*> m_vecteur;

public:
    Arete(int id, Sommet*s1, Sommet*s2, int weight);
    ~Arete();

    void write_weight(Svgfile& svgout);
    void weight_assimilation(std::string Fichier);
    void set_Weight(int weight);
    void dessiner(Svgfile& svgout) const;
    std::string number_to_strg(int nombre)const;

    int get_id()const;
    int get_idS1() const;
    int get_idS2() const;
    int get_Weight() const;


    Sommet* getSommet1()const;
    Sommet* getSommet2()const;

};

#endif // ARETE_H_INCLUDED
