#include<iostream>
using namespace std;

int main()
{

    int sum=0;
    int n=5;
    int arr[5]={1,2,3,4,6};
    for(int i=0;i<n;i++)
    {
       sum=sum+arr[i];
    }
    cout<<"the sum of array is : "<<sum<<endl;

    return 0;
}