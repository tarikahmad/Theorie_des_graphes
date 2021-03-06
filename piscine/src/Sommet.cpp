#include "Sommet.h"
#include <sstream>

Sommet::Sommet(std::istream& is)
{
    double x;
    double y;
    //char nom;
    is>>m_id>>m_nom>>x>>y;
    m_coords.first=x;
    m_coords.second=y;
    m_cd=0;
    m_cdn=0;
    m_cp=0;
    m_cpn=0;
    m_couleur='B';

}


Sommet::~Sommet()
{
    //dtor
}

int Sommet::getId()const
{
    return m_id;
}

void Sommet::setId(int id)
{
    m_id=id;
}

std::string Sommet::getNom()const
{
    return m_nom;

}

double Sommet::getx()const
{
    return m_coords.first;
}

double Sommet::gety()const
{
    return m_coords.second;
}

double Sommet::getcd()const
{
    return m_cd;
}

std::vector<Sommet*> Sommet::getAdj()const
{
    return m_adj;
}

void Sommet::setVectAdj(std::vector<Sommet*> thomaslpb)
{
    m_adj=thomaslpb;
}

    double Sommet::getcdn()const
    {
        return m_cdn;
    }

    void Sommet::setcdn(double cdn)
    {
        m_cdn=cdn;
    }

    double Sommet::getcp()const
    {
        return m_cp;
    }
    void Sommet::setcp(double cp)
    {
        m_cp=cp;
    }
    double Sommet::getcpn()const
    {
        return m_cpn;
    }
    void Sommet::setcpn(double cpn)
    {
        m_cpn=cpn;
    }

    double Sommet::getcvp()const
    {
        return m_cvp;
    }

    void Sommet::setcvp(double cvp)
    {
     m_cvp=cvp;
    }


void Sommet::setcd( double cd)
{
    m_cd=cd;
}










double Sommet::getcsi()const
{
    return m_csi;

}

void Sommet::setcsi(double csi)
{
    m_csi=csi;
}

char Sommet::get_color() const

{
    return m_couleur;// on r�cup�re la couleur du sommet
}

void Sommet::set_color(char color)
{
    m_couleur=color;// on attribue une couleur au sommmet consid�r�
}
void Sommet::set_distance(double distance)
{
    m_distance=distance;// on attribue la distance entre le sommet consid�r� et le sommet d'arriv�e
}
double Sommet::get_distance() const
{
    return m_distance;// on r�cup�re cette distance
}

size_t Sommet::get_nb_adj() const
{
    return m_adj.size();// on r�cup�re le nombre de successeurs du sommet consid�r�
}

Sommet* Sommet::get_adj(int x) const
{
    return m_adj[x];// on r�cup�re le successeur de la case i du vecteur des successeurs du sommet consid�r�
}

void Sommet::setadj(Sommet* s1)
{
    m_adj.push_back(s1);
}

void Sommet::dessiner(Svgfile& svgout)
{
    svgout.addDisk(m_coords.first, m_coords.second, 10, "pink");
}

void Sommet::ecrireNom(Svgfile& svgout)
{
    svgout.addText(this->m_coords.first, this->m_coords.second, this->m_nom, "black");
}

void Sommet::ecrireCentraliteDegreN(Svgfile& svgout)
{
    svgout.addText(this->m_coords.first, this->m_coords.second, this->nbToStrg(m_cdn),"green");
}

void Sommet::ecrireCentraliteDegre(Svgfile& svgout)
{
    svgout.addText(this->m_coords.first, this->m_coords.second, this->nbToStrg(m_cd),"green");
}

void Sommet::ecrireCentraliteP(Svgfile& svgout)
{
    svgout.addText(this->m_coords.first, this->m_coords.second, this->nbToStrg(m_cp),"green");
}

void Sommet::ecrireCentralitePN(Svgfile& svgout)
{
    svgout.addText(this->m_coords.first, this->m_coords.second, this->nbToStrg(m_cpn),"green");
}

std::string Sommet::nbToStrg(int nombre)const
{
    std::ostringstream a;
    a<<nombre;
    return a.str();
}
