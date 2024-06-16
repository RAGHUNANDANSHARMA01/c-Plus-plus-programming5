#include<iostream>
const int max=3;
int main()
{
	int var[max]={100,200,300};
	int*ptr;
	ptr=&var[max-1];
	for(int i=max;i>0;i--)
	{
		cout<<"address";
		cout<<ptr;
		cout<<"value 1";
		cout<<*ptr;
		ptr--;
		getch();
	}
	
}
