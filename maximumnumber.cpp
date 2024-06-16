#include<iostream>
using namespace std;
int max(int num1,int num2);
int main()
{
    int a;
    cout<<"enter the 1st number:";
    cin>>a;
    cout<<"enter the 2nd number:";
    int b;
    cin>>b;
    int ret;
    ret=max(a,b);
    cout<<"max values is:"<<ret<<endl;
    return 0;
}
int result;
int max(int num1,int num2)
{
if(num1>num2)
{
result=num1;
}
else
{
result=num2;
}
return result;
}