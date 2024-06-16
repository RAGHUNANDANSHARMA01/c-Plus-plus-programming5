#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter three number:";
	cin>>a>>b>>c;
	if(a<b)
	{
		if(a<c)
		{
		cout<<"a is greatest number";
	}
	else
	{
		cout<<"b is greatest number";
	}
}
    else
	{
		if(b<a)
		{
			cout<<"b is greatest number";
		}
		else
		{
			
			cout<<"c is greatest number";
		}
	}
	return 0;
}
