#include<iostream>
using namespace std;
    int max(int a,int b,int c);
    int main()
    {
        int a;
        cout<<"enter the 1st number:";
        cin>>a;
        cout<<"enter the 2nd number:";
        int b;
        cin>>b;
        int c;
        cout<<"enter the 3rd number:";
        cin>>c;
        int ret;
        ret=max(a,b,c);
        cout<<"max value is :"<<ret;
        return 0;
    }
    int result;
    int max(int a,int b,int c)
    {
    if(a>b && a<c)
    {
        result=a;
    }
    else if(b>a && b>c)
    {
        result=b;
    }
    else 
    {
        result=c;
    }
    return result;
    }