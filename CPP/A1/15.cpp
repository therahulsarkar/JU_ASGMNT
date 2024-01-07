#include<iostream>
using namespace std;
class Complex
{
	int real;
	int i;
	public:	
	Complex()
	{
		real=i=0;
	}
	Complex(int r=0,int im=0)
	{
		real=r;
		i=im;
	}
	friend void add(Complex o1, Complex o2);
	void display()
	{
		cout<<real<<"+"<<i<<"i"<<endl;
	}
	
};
void add(Complex o1, Complex o2)
{
	cout<<o1.real+o2.real<<"+"<<o1.i+o2.i<<"i";
	return;
}
int main()
{
	int r,i;
	cout<<"Enter number1(real imaginary): ";
	cin>>r>>i;
	Complex o(r,i);
	cout<<"Enter number1(real+imaginaryi): ";
	cin>>r>>i;
	Complex o2(r,i),o3(0,0);
	add(o,o2);
	return 0;
}
