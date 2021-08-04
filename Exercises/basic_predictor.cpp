#include<iostream>
using namespace std;
int main(){
  int i,j,k,l,m,eq[9],re[9],o,u,r,p;
  bool q;
  for(i=0;i<2;i=i+1){
    
    eq[5]=21;
    eq[7]=20;
    if(i==0){
      eq[5]=eq[5]+3;
    }
    if(i==1){
      eq[5]=eq[5]+1;
      eq[7]=eq[7]+1;
    }
    for(j=0;j<3;j=j+1){
      eq[2]=24;
      eq[6]=21;
      if(j==0){
        eq[2]=eq[2]+3; 
      }
      if(j==1){
        eq[2]=eq[2]+1;
        eq[6]=eq[6]+1;
      }
      if(j==2){
        eq[6]=eq[6]+3;
      }
      if(eq[5]>=eq[6]){
        for(k=0;k<3;k=k+1){
          eq[3]=23;
          eq[8]=10;
          if(k==0){
            eq[3]=eq[3]+3;
          }
          if(k==1){
            eq[3]=eq[3]+1;
            eq[8]=eq[8]+1;
          }
          if(k==2){
            eq[8]=eq[8]+3;
          }
          for(l=0;l<3;l=l+1){
            eq[9]=7;
            eq[4]=23;
            if(l==0){
              eq[9]=eq[9]+3;
            }
            if(l==1){
              eq[9]=eq[9]+1;
              eq[4]=eq[4]+1;
            }
            if(l==2){
              eq[4]=eq[4]+3;
            }
            for(m=0;m<3;m=m+1){
              eq[0]=36;
              eq[1]=25;
              if(m==0){
                eq[0]=eq[0]+3;
              }
              if(m==1){
                eq[0]=eq[0]+1;
                eq[1]=eq[1]+1;
              }
              if(m==2){
                eq[1]=eq[1]+3;
              }
              cout<<i<<j<<k<<l<<m<<"\n";
              re[0]=eq[0];
              re[1]=eq[1];
              re[2]=eq[2];
              re[3]=eq[3];
              re[4]=eq[4];
              re[5]=eq[5];
              re[6]=eq[6];
              re[7]=eq[7];
              re[8]=eq[8];
              re[9]=eq[9];
              q=true;
              while(q==true){
                for(o=0;o<9;o=o+1){
                  q=false;
                  if(re[o]<re[o+1]){
                    re[o]=r;
                    re[o]=re[o+1];
                    re[o+1]=r;
                    q=true;
                  }
                }
              }
              for(u=0;u<10;u=u+1){
                for(p=0;p<10;p=p+1){
                  if(re[u]==eq[p]){
                    if(p==0){
                      cout<<"brasil:   "<<re[u]<<"\n";
                    }
                    if(p==1){
                      cout<<"colombia: "<<re[u]<<"\n";
                    }
                    if(p==2){
                      cout<<"uruguay   "<<re[u]<<"\n";
                    }
                    if(p==3){
                      cout<<"chile     "<<re[u]<<"\n";
                    }
                    if(p==4){
                      cout<<"argentina "<<re[u]<<"\n";
                    }
                    if(p==5){
                      cout<<"peru      "<<re[u]<<"\n";
                    }
                    if(p==6){
                      cout<<"paraguay  "<<re[u]<<"\n";
                    }
                    if(p==7){
                      cout<<"ecuador   "<<re[u]<<"\n";
                    }
                    if(p==8){
                      cout<<"bolivia   "<<re[u]<<"\n";
                    }
                    if(p==9){
                      cout<<"venezuela "<<re[u]<<"\n";
                    }
                  }
                }
                
              }

              
            }
          }
      }
      }  
    }
  }
  
  
  return 0;
}

