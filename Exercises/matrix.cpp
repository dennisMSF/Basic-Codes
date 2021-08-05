#include<iostream>
using namespace std;
class matrix{
public:
    int arry[3][3];
    void llena(int a,int b){
        for(int i=0;i<a;i++){
            for (int j=0;j<b;j++){
                arry[i][j]=b;
                cout<<arry[i][j];
            }
        cout<<endl;
        }
    }
};
class calculator{
    matrix x,y,z;
    public:
    void suma(int a, int b){
        for(int i=0;i<a;i++){
            for (int j=0;j<b;j++){
                z.arry[i][j]=y.arry[i][j]+x.arry[i][j];
                cout<<z.arry[i][j];
            }
        cout<<endl;
        }
    }
    void resta(int a, int b){
        for(int i=0;i<a;i++){
            for (int j=0;j<b;j++){
                z.arry[i][j]=y.arry[i][j]-x.arry[i][j];
                cout<<z.arry[i][j];
            }
        cout<<endl;
        }
    }
    void promedio(int a, int b){
        for(int i=0;i<a;i++){
            for (int j=0;j<b;j++){
                z.arry[i][j]=(y.arry[i][j]+x.arry[i][j])/2;
                cout<<z.arry[i][j];
            }
        cout<<endl;
        }
    }
    void mayor(int a, int b){
        int maximo;
        maximo=x.arry[0][0];
        for(int i=0;i<a;i++){
            for (int j=0;j<b;j++){
                if(x.arry[0][0]<y.arry[i][j]){
                    maximo=y.arry[i][j];
                    z.arry[i][j]=maximo;
                    cout<<z.arry[i][j];
                }
            }
        cout<<endl;
        }
    }
    void menor(int a, int b){
        int minimo;
        minimo=x.arry[0][0];
        for(int i=0;i<a;i++){
            for (int j=0;j<b;j++){
                if(x.arry[0][0]>y.arry[i][j]){
                    minimo=y.arry[i][j];
                    z.arry[i][j]=minimo;
                    cout<<z.arry[i][j];
                }
            }
        cout<<endl;
        }
    }
};
int main(){
    matrix A,B,C;
    A.llena(2,2);
    //A.imprimir(2,2);
    B.llena(2,2);
   // C.llena(2,2);

    //calculator A,B,C;
    //A.suma(2,2);
    //B.imprimir(5,5);

    return 0;
}
