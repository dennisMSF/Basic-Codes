#include<iostream>
using namespace std;
class point{
  public:
    int x, y;
};
class vector{
  public:
    point start,end;
  
};
void setpointoff(vector& s, int a, int b){
  s.start.x+=a;
  s.end.y+=b;
}
void printvec(vector a){
  cout<<a.start.x<<" "<<a.end.y;
}
int main(){
  vector vec1,vec2;
  vec1.start.x=3;
  vec1.end.y=4;
  vec2.start.x=6;
  vec2.end.y=8;
  setpointoff(vec1,2,3);
  printvec(vec1);cout<<endl;
  printvec(vec2);
  
  return 0;
}
