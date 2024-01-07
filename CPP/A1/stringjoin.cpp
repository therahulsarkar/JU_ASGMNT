#include<iostream>
#include<string.h>
using namespace std;
class String
{
	char s1[20];
	public:
		static int count;
		void getdata()
		{
			cout<<"Enter String "<<count<<" : ";
			cin>>s1;
			count++;
		}
		String operator + (String &s2)
		{
			String s;
			strcat(s1,s2.s1);
			strcpy(s.s1,s1);
			strrev(s.s1);
			return s;
		}
		void putdata()
		{
			cout<<s1<<"\n";
		}
};
int String :: count=1;
int main()
{
	String s,s2,s3;
	s.getdata();
	s2.getdata();
	s3=s+s2;
	s3.putdata();
//	s.putdata();
//	s2.putdata();
}
