#include <iostream>
using namespace std;

int main()
{
    int n,i,sum=0;
    cout<<"enter any number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"sum of first "<<n<<" natural numbers is: "<<sum;
    return 0;

}