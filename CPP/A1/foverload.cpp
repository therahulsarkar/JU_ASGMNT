#include<iostream>
using namespace std;
class Volume
{
	public:
		//cube
		double calvol(double side)
		{
			return side*side*side;
		}
		//cuboid
		double calvol(double l,double h,double b)
		{
			return l*h*b;
		}
		//sphere
		double calvol(double radius,char c)
		{
			if(c=='s')
			{
				double p=(double)22/7;
				return p*radius*radius*radius;
			}
			else
				return 0;
		}
		//cylinder
		double calvol(double r,double l)
		{
			return (22/7)*r*r*l;
		}
		//cone
		double calvol(double r,double l,char c)
		{
			if(c=='c')
			{
				double x=(double)1/3,p=(double)22/7;
				return (p*r*r*l*x);
			}
			else
				return 0;
		}
};
int main()
{
	Volume v;
	cout<<v.calvol(5.0)<<endl;//cube
	cout<<v.calvol(5.0,6.0,7.0)<<endl;//cuboid
	cout<<v.calvol(7.0,'s')<<endl;//sphere
	cout<<v.calvol(7.0,2.0)<<endl;//cylinder
	cout<<v.calvol(7.0,1.0,'c')<<endl;//cone
}
