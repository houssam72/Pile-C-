#include <iostream>

using namespace std;
class vecteur;
class matrice
{
    float mat[3][3];
public:
matrice (float t[3][3]);
vecteur prod(vecteur);
};
class vecteur
{
    float v[3];
public:
vecteur (float t[3]);vecteur();
friend vecteur matrice::prod(vecteur);
void affiche();
};



