#include<iostream>
#include<conio.h>
using namespace std;
int a,b,c;
class A
{
	public:
		void input();
		void add();
	};
	void A :: input()
	{
	cout<<"enter two number:";
	cin>>a>>b;
}
void A:: add()
{
	c=a+b;
	cout<<"addition "<<c<<endl;
}
class B
{
	public:
		void sub();
	};
	void B::sub()
	{
		c=a-b;
		cout<<"subtraction"<<endl;
		}
		class C:public A,public B
		{
			public:
				void multi();
				void divi();
			};
			void C::multi()
			{
				c=a*b;
				cout<<"multiplication"<<endl;
			};
				void C::divi()
				{
					c=a/b;
					cout<<"division"<<endl;
				};
				int main()
				{
					C obj;
					obj.input();
					obj.add();
					obj.sub();
					obj.multi();
					obj.divi();
					return 0;
				}

