#include <iostream>
using namespace std;
int main(){
  float temp,sumatoria,array[6]={13.45,12.4,11.5,16.54,14,10.25} ;
  sumatoria=0;
  float mayor=array[0];
  float menor=array[0];
  for (int i=1;i<6;i++){
    if(mayor<array[i]){
      mayor=array[i];
    }
    if(menor>array[i]){
      menor=array[i];
    }
  }
  for(int i=0;i<6;i++){
    sumatoria=sumatoria+array[i];
  }
  
  for (int i=1;i<6;i++){
    for(int j=0;j<6-1;j++){
      if(array[j]>array[j+1]){
        temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
      }
    }
  }
  cout<<mayor<<"\n"<<menor ;
  cout<<"\n"<<sumatoria/6;
  cout<<"\n"<<array[3];
}
