#include<iostream>
using namespace std;

int main()
{
    int arr[6]={1,-2,3,-4,5,-6};
    int n=6;
    int brr[6]={0};
   
    int evenindex=0;
    int oddindex=1;

    for(int i=0; i<n; i++)
    {
        if(arr[i]>0)
        {
            if(evenindex<n)
            {
                brr[evenindex]=arr[i];
                evenindex +=2;
            }
        }

      else
        {
            if(oddindex<n)
            {
                brr[oddindex]=arr[i];
                oddindex +=2;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<brr[i]<<" ";
    }

    

    return 0;
}