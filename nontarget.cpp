#include<iostream>
using namespace std;
int main()
{
    int array[]={1,2,3,4};
    int targetsum=11;
    int size=4;
    int nonpairs=0;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(array[i]+array[j]==targetsum)
{
    nonpairs++;
}        }
    }
    cout<<"nonpairs is:"<<nonpairs<<endl;
    return 0;

}