#include "head.h"
int main()
{
    float t[3][3];
    float v[3];

    cout<<"====MATRICE====\n";
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++){
        cin>>t[i][j];
    }
    cout<<"===vecteur===\n";
    for(int i=0;i<3;i++){
        cin>>v[i];
    }
    matrice x(t);
    vecteur y(v),z(v);
    z=x.prod(y);
    z.affiche();
    return 0;
}
