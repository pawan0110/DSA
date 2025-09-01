#include<iostream>
using namespace std;

int main()
{
    int zerocount=0;
    int onecount=0;
    int n=7;
    int arr[7]={1,1,0,0,1,1,0};
    int i;
    for( i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            zerocount++;
        }
        if(arr[i]==1)
        {
            onecount++;
        }
    }

    for( i=0; i<zerocount; i++)
    {
        arr[i]=0;
    }
    for( i=zerocount; i<zerocount+onecount; i++)
    {
        arr[i]=1;
    }
    
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}