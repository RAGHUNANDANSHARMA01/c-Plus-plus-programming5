#include<iostream>
using namespace std;
int main()
{
    int i,j,k=1,row;
    cout<<"enter the number of rows:";
    cin>>row;
    for(i=1;i<=k;i++) 
    {
        for(j=i;j<=row;j++)
        cout<<++j<<"";
        cout<<"\n";
    }
    return 0;
}