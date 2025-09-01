#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int minans = INT_MAX;
    int arr[7]={1,23,3,4,5,6,7};
    int n=7;

    for(int i=0; i<n; i++)
    {
        if(arr[i]<minans)
        {
            minans=arr[i];
        }
    }
    cout<<"smallest nO of array is : "<<minans<<endl;

    return 0;
}