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
	Complex operator + (Complex obj)
	{
		Complex o(0,0);
		o.real=real+obj.real;
		o.i=i+obj.i;
		return o;
	}
	void display()
	{
		cout<<real<<"+"<<i<<"i"<<endl;
	}
	
};
int main()
{
	int r,i;
	cout<<"Enter number1(real imaginary): ";
	cin>>r>>i;
	Complex o(r,i);
	cout<<"Enter number1(real+imaginaryi): ";
	cin>>r>>i;
	Complex o2(r,i),o3(0,0);
	
	o3=o+o2;
	o3.display();
	return 0;
}
