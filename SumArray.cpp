#include <iostream>
using namespace std;

int main()
{
    int n=7,sum=0;
    int A[7]={5,3,7,9,1,6,22};
    for(int i=0;i<n;i++)
    {
        sum=sum+A[i];
    }
    cout<<"sum of elements of array is: "<<sum;
    return 0;
}