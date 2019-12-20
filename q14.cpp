#include<iostream>
#include<cmath>
using namespace std;

class polar;
class point{
	float x,y;
	public:
	point(){
		x = 0;
		y = 0;
	}
	friend istream & operator >> (istream &ip,point &p);
	friend ostream & operator << (ostream &ip,point &p);
	int getx(){	return x;	}
	int gety(){	return y;	}
	/*operator polar(){
		polar pr;
		pr.r = sqrt(x*x + y*y);
		pr.a = atan(y/x);
		return pr;
	}*/
};

class polar{
	float r,a;
	public:
	polar(){
		r = 0;
		a = 0;
	}
	polar(point pt){
		r = sqrt(pt.getx()*pt.getx() + pt.gety()*pt.gety());
		a = atan(pt.gety()/pt.getx());
	}
	friend ostream & operator << (ostream &ip,polar &p);
};

istream & operator >> (istream &ip,point &p){
	cout<<"Enter X-coordinate : ";
	ip>>p.x;
	cout<<"Enter Y-coordinate : ";
	ip>>p.y;
	return(ip);
}

ostream & operator << (ostream &op,point &p){
	op<<"X-coordinate : ";
	op<<p.x<<endl;
	op<<"Y-coordinate : ";
	op<<p.y<<endl;
	return(op);
}

ostream & operator << (ostream &op,polar &p){
	op<<"Radius : ";
	op<<p.r<<endl;
	op<<"Angle : ";
	op<<p.a<<endl;
	return(op);
}

int main(void){
	point pt;
	cout<<"Enter Point Coordinates : "<<endl;
	cin>>pt;
	cout<<"Point Coordinates are : "<<endl;
	cout<<pt<<"\n";
	polar pr = pt; 
	cout<<pr;
	return 0;
}

