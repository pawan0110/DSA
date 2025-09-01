#include<iostream>
using namespace std;

int main()
{
    int countzero=0;
    int countone=0;

    int arr[7]={1,1,1,1,0,0,0};
    int n=7;

    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            countzero++;
        }
        if(arr[i]==1)
        {
            countone++;
        }
    }

    cout<<countone<<endl;
    cout<<countzero<<endl;

   return 0;
}