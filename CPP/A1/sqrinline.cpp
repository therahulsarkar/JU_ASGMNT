#include<iostream>
using namespace std;
inline void sqr(int &x)
{
	x=x*x;
	return;
}
int main()
{
	int x;
	cout<<"Enter x : ";
	cin>>x;
	sqr(x);
	cout<<x;
}
