#include<iostream>
#include<math.h>
using namespace std;
class Triangle
{
	float a,b,c,area,per;
	public:
//		Triangle(float side1)
//		{
//			a=0;
//			b=0;
//			c=0;
//		}
		void inp()
		{
			cout<<"Enter side1 : ";
			cin>>a;
			cout<<"Enter side2 : ";
			cin>>b;
			cout<<"Enter side3 : ";
			cin>>c;
		}
		void perimeter()
		{
			per=a+b+c;
		}
		void cal_area();
		void display();
};
void Triangle::cal_area()
{
	float s=per/2;
	area= sqrt(s*(s-a)*(s-b)*(s-c));
}
void Triangle::display()
{
	cout<<"Area of the triangle : "<<area<<"\n";
	cout<<"Perimeter of triangle : "<<per;
}
int main()
{
	Triangle t;
	t.inp();
	t.perimeter();
	t.cal_area();
	t.display();
	return 0;
}
