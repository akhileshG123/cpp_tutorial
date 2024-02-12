#include <iostream>
using namespace std;

int main()
{
    int m1,m2,m3,total;
    float avg;
    cout<<"enter marks in three subjects: "<<endl;
    cin>>m1>>m2>>m3;
    total=m1+m2+m3;
    avg=total/3.0;
    if(avg>=75)
    {
        cout<<"A Grade"<<endl;
    }
    else
    {
        if(avg>=50)
        {
            cout<<"B Grade"<<endl;
        }
        else
        {
            cout<<"C Grade"<<endl;
        }
    }
    return 0;

}