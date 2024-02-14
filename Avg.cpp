#include <iostream>
using namespace std;

int main()
{
    int n=5,A[5],avg,sum=0;
    cout<<"enter the numbers: ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+A[i];
        avg=(sum)/n;
    }
    cout<<"average of given numbers is: "<<avg<<endl;
    return 0;
}