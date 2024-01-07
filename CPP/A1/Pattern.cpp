#include<iostream>
using namespace std;
class Pattern
{
	int row,c;
	public:
		void getdata()
		{
			cout<<"Enter number of rows : ";
			cin>>row;
		}
		void display()
		{
			c=row;
			for(int i=1;i<=row;i++)
			{
				for(int j=1;j<i;j++)
					cout<<" ";
				for(int j=(c-1)*2+1;j>=1;j--)
					cout<<"*";
				c--;
				cout<<endl;
			}
		}
};
int main()
{
	Pattern p;
	p.getdata();
	p.display();
}
