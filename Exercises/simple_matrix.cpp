#include<iostream>
using namespace std;
int matriz(int f[][3],int len){//esta funcion servira para imprimir los valores de la matriz
  for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
      cout<<f[i][j]<<" ";
    }
    cout<<"\n";//aqui se hace un salto de linea para que se imprima la matriz 3x3
  }
  return 0;
}
int promedio(int y[][3],int len){//Esta funcion recibira dos valores, la matriz y longitud del arreglo para poder hallar el promedio
  int prom,datos;
  datos=9;
  prom=0;
  for (int i=0;i<len;i++){
    for (int j=0;j<len;j++){//estas dos iteraciones es para recorrer cada elemento de la matriz y sumarlos en la variable promedio
      prom=prom+y[i][j];
    }
  }
  return prom;
}
int maximo(int z[][3],int len){//esta funcion nos hallara el maximo valor de toda la matriz 
  int max;
  max=z[0][0];//se le da un valor inicial a la variable max para despues con las iteraciones compararlo con los demas valores de la matriz
  for (int i=0;i<len;i++){
    for (int j=0;j<len;j++){
      if (z[i][j]>z[0][0]){
        max=z[i][j];
      }
    }
  }
  return max;
}
int minimo(int z[][3],int len){//esta funcion es muy parecida a la funcion max, solo que en vez de hallar el maximo hallaremos el minimo
  int min;
  min=z[0][0];
  for (int i=0;i<len;i++){
    for (int j=0;j<len;j++){
      if (z[i][j]<z[0][0]){
        min=z[i][j];
      }
    }
  }
  return min;
}
int ordenar(int z[][3],int len){//esta funcion servira para obtener las medianas, para lo cual se necesitara ordenar las listas, y nos retornara una funcion matriz que es la que nos imprime la matriz con las listas ordenadas y nos imprimira las medianas de cada lista
  int temp;
  for (int i=0;i<len;i++){
    for (int j=0;j<len-1;j++){
            if(z[i][j]>z[i][j+1]){
              temp=z[i][j];
              z[i][j]=z[i][j+1];
              z[i][j+1]=temp;
            }
          }
        }
        cout<<"las medianas son:"<<z[0][1]<<" "<<z[1][1]<<" "<<z[2][1]<<"\n";
        return matriz(z,3);
    }
int main(){
  int as[3][3];
  for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
      cin>>as[i][j];
    }
  }
  for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
      cout<<as[i][j]<<" ";
    }
    cout<<"\n";
  }
  cout<<"el valor maximo es:"<<maximo(as,3)<<"\n";
  cout<<"el valor minimo es:"<<minimo(as,3)<<"\n";
  cout<<"el promedio es:"<<(promedio(as,3))/9<<"\n";
  cout<<ordenar(as,3)<<"\n";
}
