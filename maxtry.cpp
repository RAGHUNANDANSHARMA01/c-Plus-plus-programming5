#include<iostream>
using namespace std;
int max(int num1,int num2);
int main()
{
    int num1;
    cout<<"enter the 1st number:";
    cin>>num1;
    cout<<"enter the 2nd number:";
    int num2;
    cin>>num2;
    int ret;
    ret=max(num1,num2);
    cout<<"max value is:"<<ret<<endl;
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

    
