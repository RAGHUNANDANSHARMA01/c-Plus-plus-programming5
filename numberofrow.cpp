#include<iostream>
using namespace std;
int main()
{
    int i,j,k,row=1;
    cout<<"enter the number of rows:";
    cin>>row;
    for(i=0;i<=row;i++)
    {
    for(j=0;j<=i;j++)
    cout<<k++<<" ";
    cout<<endl;
    }
    return 0;
}