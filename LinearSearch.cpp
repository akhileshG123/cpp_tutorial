#include <iostream>
using namespace std;

int main()
{
    int key,A[10],n=10;
    cout<<"enter numbers: ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"enter the value of key: ";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(key==A[i])
        {
            cout<<"found at "<<i<<endl;
            return 0;
        }
    }
    cout<<"not found"<<endl;
    return 0;

}