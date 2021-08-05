#include<iostream>
using namespace std;
int ingresar(int,int,int,int,int**);
int crear(int a,int m, int n,int **por){
  if (a==m){
    return ingresar(0,0,3,3,por);
    return 0;
  }
  else{
    por[a]=new int[n];
    return crear(++a,m,n,por);
  }
}
int crearc(int a,int m, int n,int **zeta){
  if (a==m){
    return 0;
  }
  else{
    zeta[a]=new int[n];
    return crearc(++a,m,n,zeta);
  }
}
int borrar(int a,int m, int n,int **por){
  if (a==m){
    delete [] por;
    return 0;
  }
  else{
    delete [] por[a];
    return borrar(++a,m,n,por);
  }
}
int ingresar(int a,int b, int m,int n,int **por){
  if (a==m){
    return 0;
  }
  
    cout<<"ingrese dato";
    cin>>por[a][b];
    if((b+1)%n==0){
      ++a;
      return ingresar(a,0,m,n,por);
    }
    return ingresar(a,++b,m,n,por);
    //return ingresar(++a,b,m,n,por);

}
int suma(int a,int b, int m,int n,int **por,int **zeta,int **alga){
   if(a==m){
    return 0;
  }
  alga[a][b]=zeta[a][b]+por[a][b];
  if((b+1)%3==0){
    ++a;
    return suma(a,0,m,n,por,zeta,alga);
  }
  return suma(a,++b,m,n,por,zeta,alga);
}
int resta(int a,int b, int m,int n,int **por,int **zeta,int **alga){
   if(a==m){
    return 0;
  }
  alga[a][b]=zeta[a][b]-por[a][b];
  if((b+1)%3==0){
    ++a;
    return suma(a,0,m,n,por,zeta,alga);
  }
  return suma(a,++b,m,n,por,zeta,alga);
}
int mayor(int a,int b, int m,int n,int **por,int **zeta,int **alga){
   if(a==m){
    return 0;
  }
  bool c;
  c=por[a][b]>zeta[b][a];
  if((b+1)%3==0){
    ++a;
    if (c==true){
      alga[a][b]=por[a][b];
    }
    else{
      alga[a][b]=zeta[a][b];
    }
    return suma(a,0,m,n,por,zeta,alga);
  }
  return suma(a,++b,m,n,por,zeta,alga);
}
int main(){
  int m,n;
  int **array=new int*[m];
  int **ptr= new int*[m];
  int **asc= new int*[m];
  crear(0,3,3,array);
  crear(0,3,3,ptr);
  crearc(0,3,3,asc);
  //suma(0,0,3,3,array,ptr,asc);
  mayor(0,0,3,3,array,ptr,asc);
  for (int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<asc[i][j];
    }
  }
  //ingresar(0,0,3,3,array);
  return 0;
  
}
