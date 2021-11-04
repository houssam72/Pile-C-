#include "head.h"
matrice::matrice(float t[3][3])
{
 for(int i=0;i<3;i++)
 for(int j=0;j<3;j++){
  mat[i][j]=t[i][j];
 }
}

vecteur::vecteur(float t[3]){
 for(int i=0;i<3;i++){
    v[i]=t[i];
 }
}


void vecteur::affiche(){
 for(int i=0;i<3;i++){
    cout<<v[i]<<"  ";
 }
}

vecteur matrice::prod(vecteur x){
vecteur y(x.v);
float a;
 y.v[0]=0;y.v[1]=0;y.v[2]=0;
for(int i=0;i<3;i++){
    a=0;
    for(int j=0;j<3;j++){
      a+=mat[i][j]*x.v[i];
    }
    y.v[i]+=a;
}
return y;
}
