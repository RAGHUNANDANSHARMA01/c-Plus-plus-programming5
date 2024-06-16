#include<iostream>
using namespace std;
int main()
{  
    int n;
    int i=1;
    int sum=0;
    cout<<"enter the number:";
    cin>>n;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<"Natural Number is:"<<sum<<endl;
    return 0;
}