#include<iostream>
using namespace std;
class Complex
{
	private:
		int real;
		int imaginary;
	public:
		Complex()
		{
			real=imaginary=0;
		}
	
		Complex(int r)
		{
			real=r;
			imaginary=0;
		}
		Complex(int r,int i)
		{
			real=r;
			imaginary=i;
		}
		void show()
		{
			cout<<"Number = "<<real<<" + "<<imaginary<<"i";
		}
		Complex sum(Complex num1,Complex num2)
		{
			Complex result;
			result.real=num1.real+num2.real;
			result.imaginary=num1.imaginary+num2.imaginary;
			return result;
		}
};
int main()
{
	Complex n1(5);
	Complex n2(5,10);
	Complex result;
	result=result.sum(n1,n2);
	result.show();
}
