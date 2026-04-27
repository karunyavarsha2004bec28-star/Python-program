#include<iostream>
using namespace std;
class circle{
public:
    double radius;
    void calculatearea(){
    	double area=3.14*radius*radius;
    	cout<<"area of the circle:"<<area<<endl;
	}
	void calculatecircumference(){
		double circ=2*3.14*radius;
		cout<<"circumference of circle:"<<circ<<endl;
	}
};
int main(){
	circle c1;
	cout<<"enter the radius:";
	cin>>c1.radius;
	c1.calculatearea();
	c1.calculatecircumference();
	return 0;
}
