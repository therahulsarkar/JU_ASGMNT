/*1. Write a C++ Program to calculate area of a circle to demonstrate the access modifier (A) 
public (B) private (C) protected.*/
#include<iostream>
using namespace std;
#define pi 3.14
class Circle
{
public:// in public access specifier , the data members can be accessed by the object of the class. 
	//data members can be accessed from anywhere int the program.
	double r;
	double area()
	{
		
		return pi*r*r;
	}
};
class Circle2
{
	private:
		double r;
		public:
			// member function can access private 
            // data member radius
			double area2(double radius)
			{
				r=radius;
				return pi*r*r;
			}
};
class Parent
{ //base class
	//data members cant be accessed outside the class unless with the help of a friend class or through mode of inheritance
	protected:
		double radius;
};
class Child:public Parent //child class derived from base class
{
	//sub class or derived class
public:
	double area3(double r){
		// Child class is able to access the inherited 
        // protected data members of base class
        radius=r;
        return pi*radius*radius;

	}

};
int main()
{
	#ifdef a
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	char ch;
	cout<<"select an option\n";
	cout<<"A)Public\n";
	cout<<"B)Private\n";
	cout<<"C)protected\n";
	cin>>ch;
	switch(ch)
	{
		case 'A':
			case 'a':
				{
					Circle c;
	cout<<"enter a radius"<<endl;
	cin>>c.r;
	cout<<"area of the circle having radius "<<c.r<<" ="<<c.area();
	break;
				}
				case 'B':
					case 'b':
						{
							Circle2 c;
							int r;
	cout<<"enter a radius"<<endl;
	cin>>r;
	cout<<"area of the circle having radius "<<r<<" ="<<c.area2(r);
	break;
						}
						case 'C':
					case 'c':
						{
							// member function of the derived class can
    // access the protected data members of the base class
							Child c;
							int r;
	cout<<"enter a radius"<<endl;
	cin>>r;
	cout<<"area of the circle having radius "<<r<<" ="<<c.area3(r);
	break;
						}
	}
	return 0;
}

