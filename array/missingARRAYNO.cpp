#include<iostream>
using namespace std;

int main()
{
    int arr[8]={1,2,3,4,6,7,8};
    int n=8;
    int total = (n+1)*n/2;
    int sum=0;

    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
     int missingN0 = total - sum;
     cout<<"the missing no is "<< missingN0 <<endl;

    return 0;
}