#include<iostream>
using namespace std;
int ingresar(int,int,int,int,int**);
int imprimir(int **asper,int m,int n, int a, int b){//esta funcion imprimira la matriz resultante para cada operacion
   if(b==m){
      return 0;
    }
    cout<<asper[b][a];
    if ((a+1)%n==0){
      ++b;
    cout<<"\n";
    return imprimir(asper,m,n,0,b);
    }
  return imprimir(asper,m,n,++a,b);
}
int crear(int a,int m, int n,int **por){//crea espacios de memoria para las matrices A y B
  if (a==m){
    return ingresar(0,0,m,n,por);
    return 0;
  }
  else{
    por[a]=new int[n];
    return crear(++a,m,n,por);
  }
}
int crearc(int a,int m, int n,int **zeta){//crea espacios de memoria para matriz resultante
  if (a==m){
    return 0;
  }
  else{
    zeta[a]=new int[n];
    return crearc(++a,m,n,zeta);
  }
}
int borrar(int a,int m, int n,int **por){//funcion para liberar espacios de memoria
  if (a==m){
    delete [] por;
    return 0;
  }
  else{
    delete [] por[a];
    return borrar(++a,m,n,por);
  }
}
int ingresar(int a,int b, int m,int n,int **por){//para ingresar los datos de las matrices A y B
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
  if((b+1)%n==0){
    ++a;
    return suma(a,0,m,n,por,zeta,alga);
  }
  return suma(a,++b,m,n,por,zeta,alga);
}//Funcion para sumar los elementos de las matrices A y B
int resta(int a,int b, int m,int n,int **por,int **zeta,int **alga){
   if(a==m){
    return 0;
  }
  alga[a][b]=zeta[a][b]-por[a][b];
  if((b+1)%n==0){
    ++a;
    return suma(a,0,m,n,por,zeta,alga);
  }
  return suma(a,++b,m,n,por,zeta,alga);
}//Funcion para restar los elementos de las matrices A y B
int mayor(int a,int b, int m,int n,int **por,int **zeta,int **alga){
   if(a==m){
    return 0;
  }
  alga[a][b]=por[a][b];
  if (zeta[a][b]>por[a][b]){
    alga[a][b]=zeta[a][b];
  }
  if((b+1)%n==0){
    ++a;
    return mayor(a,0,m,n,por,zeta,alga);
  }
  return mayor(a,++b,m,n,por,zeta,alga);
}//Funcion para encontrar el mayor elemento entre A y B y ponerlo en la matriz C
int menor(int a,int b, int m,int n,int **por,int **zeta,int **alga){
   if(a==m){
    return 0;
  }
  alga[a][b]=por[a][b];
  if (zeta[a][b]<por[a][b]){
    alga[a][b]=zeta[a][b];
  }
  if((b+1)%n==0){
    ++a;
    return menor(a,0,m,n,por,zeta,alga);
  }
  return menor(a,++b,m,n,por,zeta,alga);
}//Funcion para encontrar el menor entre A y B
int promedio(int a,int b, int m,int n,int **por,int **zeta,int **alga){
   if(a==m){
    return 0;
  }
  alga[a][b]=(zeta[a][b]+por[a][b])/2;
  if((b+1)%n==0){
    ++a;
    return suma(a,0,m,n,por,zeta,alga);
  }
  return suma(a,++b,m,n,por,zeta,alga);
}//Calcula el promedio entre el elemento aij y bij
int multi(int **zap,int **steam,int n,int m,int r,int h,int g,int t,int j){
  g=g+zap[r][h]*steam[h][j];
  if(t==n-1){
    return g;
  }
  multi(zap,steam,n,m,r,++h,g,++t,j);
}//funcion para hallar la sumatoria de multiplicar aij*bij
int multiplicacion(int a,int b,int m, int n, int c, int d,int **por,int **zeta,int **alga){
    if(n!=c){
      cout<<"No se puede realizar la operacion";
      return 0;
    }
    if(a==m){
      return 0;
    }
    alga[a][b]=multi(por,zeta,n,m,a,0,0,0,b);
    if((b+1)%d==0){
      ++a;
      multiplicacion(a,0,m,n,c,d,por,zeta,alga);
    }
    return multiplicacion(a,++b,m,n,c,d,por,zeta,alga);
}//funcion para multiplicar matrices
char seleccionar(){
  char u;
  cout<<"eliga la operacion que necesite: "<<"\n";
  cout<<"Suma=s"<<"\n";
  cout<<"Resta=r"<<"\n";
  cout<<"Mayor=m"<<"\n";
  cout<<"Menor=t"<<"\n";
  cout<<"Promedio=p"<<"\n";
  cout<<"Multiplicacion=g"<<"\n";
  cin>>u;
  return u;
}//funcion para pedir al usuario que elija una operacion a realizar e ingrese la letra correspondiente
int elegir(char u,int **por,int **zeta,int **alga,int m,int n,int c,int d){
    if (u=='s'){
      int(*p_operacion)(int,int,int,int,int**,int**,int**);
      p_operacion=suma;
      return (*p_operacion)(0,0,m,n,por,zeta,alga);
    }
    if(u=='r'){
      int(*p_operacion)(int,int,int,int,int**,int**,int**);
      p_operacion=resta;
      return (*p_operacion)(0,0,m,n,por,zeta,alga);
    }
    if(u=='m'){
      int(*p_operacion)(int,int,int,int,int**,int**,int**);
      p_operacion=mayor;
      return (*p_operacion)(0,0,m,n,por,zeta,alga);
    }
    if(u=='t'){
      int(*p_operacion)(int,int,int,int,int**,int**,int**);
      p_operacion=menor;
      return (*p_operacion)(0,0,m,n,por,zeta,alga);
    }
    if(u=='p'){
      int(*p_operacion)(int,int,int,int,int**,int**,int**);
      p_operacion=promedio;
      return (*p_operacion)(0,0,m,n,por,zeta,alga);
    }
    if(u=='g'){
      int(*p_operacion)(int,int,int,int,int,int,int**,int**,int**);
      p_operacion=multiplicacion;
      return (*p_operacion)(0,0,m,n,c,d,por,zeta,alga);
    }
  
}//funcion donde se crean punteros que apuntan a las funciones y se puedan llamar a estas
int main(){
  int m,n,c,d;
  char u;
  cout<<"ingrese numero de filas matriz 1";
  cin>>m;
  cout<<"ingrese numero de columnas matriz 1";
  cin>>n;
  cout<<"ingrese numero de filas matriz 2";
  cin>>c;
  cout<<"ingrese numero de columnas matriz 2";
  cin>>d;
  int **array=new int*[m];
  int **ptr= new int*[c];
  int **asc= new int*[m];
  
  crear(0,m,n,array);
  crear(0,c,d,ptr);
  crearc(0,n,c,asc);
  u=seleccionar();
  elegir(u,array,ptr,asc,m,n,c,d);
  imprimir(asc,n,c,0,0);
  borrar(0,m,n,array);
  borrar(0,c,d,ptr);
  borrar(0,n,c,asc);
  return 0;
}
