//Problem 1
#include <iostream>
int main(){  
	int a,b,c,d,e,f,x,y,z,g; 
	std::cin>> a>>b>>c>>d>>e>>f;  
	std::cout<<"\n entry time="<< a<<":"<<b<<":"<<c; 
	std::cout<<"\n departure time="<<d<<":"<<e<<":"<<f; 
	if (a<d){    
		x=a*3600+b*60+c;    
		y=d*3600+e*60+f;   
		z=abs(y-x);   
		g=z%3600;   
		std::cout<< "\n work time="<<z/3600<<":"<<g/60<<":"<<g%60;
	}  
	else{    
		x=a*3600+b*60+c;    
		y=d*3600+e*60+f;    
		z=y-x+86400;    
		g=z%3600;   
		std::cout<< "\n work hours="<<z/3600<<":"<<g/60<<":"<<g%60;  
	}
}
