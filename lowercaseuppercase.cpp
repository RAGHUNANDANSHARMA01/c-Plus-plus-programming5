#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    char*name;
    cout<<"enter the name:";
    cin.getline(name,200);
    for(int i=0;i<strlen(name);i++)
    {
        if(islower(*(name+i)))
        *(name+i)=toupper(*(name+i));
        else
        *(name+i)=tolower(*(name+i));
}
cout<<"the conversion is:\n";
cout<<name<<endl;
}