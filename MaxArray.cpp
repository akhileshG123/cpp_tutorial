#include <iostream>
using namespace std;

int main()
{
    int n=7,max;
    int A[7]={6,4,8,3,9,1,5};
    max=A[0];
    for(int i=0;i<n;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    cout<<"maximum element of array is: "<<max<<endl;
    return 0;
    
}
