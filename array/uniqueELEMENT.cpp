#include<iostream>
using namespace std;

int main()
{
    int n=9;
    int m=0;
    int arr[9]={1,1,4,4,5,5,6,6,7};

    for(int i=0; i<n;i++)
    {
       m=m^arr[i];
    }
    cout<<m<<endl;

    return 0;
}