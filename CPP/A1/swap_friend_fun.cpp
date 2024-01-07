#include<iostream>
using namespace std;
class Num
{
	int n;
	public:
		static int c;
		Num(int i=0)
		{ 
			n=i;
			c++;
		}
		friend void swap(Num n1,Num n2);
		void display()
		{
			cout<<n<<endl;
		}		
};
void swap(Num n1, Num n2)
{
	cout<<"Before swap : n1 = "<<n1.n<<", n2 = "<<n2.n<<endl;
	n1.n=n1.n+n2.n;
	n2.n=n1.n-n2.n;
	n1.n=n1.n-n2.n;
	cout<<"After swap : n1 = "<<n1.n<<", n2 = "<<n2.n<<endl;
}
//void swap(int &x,int &y)
//{
//	x=x+y;
//	y=x-y;
//	x=x-y;
//}
int Num::c=0;
int main()
{
	int x,y;
	cout<<"Enter x and y(x y) : ";
	cin>>x>>y;
	Num n1(x),n2(y);
	n1.display();
	n2.display();
	swap(n1,n2);
//	swap(x,y);
//	cout<<x<<"    "<<y<<endl;
//	n1.display();
//	n2.display();	
}
