#include<bits/stdc++.h>
using namespace std;

// bool  issorted(int arr[], int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         for(int j=i+1; j<n; j++)
//         {
//             if(arr[j]< arr[i])                      time complexity = O(N*2)
//             {
//                 return false;
//             }
//         }
//     }
//     return true;
// }


bool issorted(int arr[], int n)
{
    for (int i=0; i<n-1; i++)
    {
        if(arr[i] >= arr[i+1])
        {
            return false;                //time complexity => o(n)                            
        }                 
    }                          
    return true;
}




int main()
{
    int arr[]={-1,2,3,4,-5};
    int n= sizeof(arr)/sizeof(arr[0]);
    bool isSorted = issorted(arr,n);
    cout<<isSorted<<endl;
    return 0;
}

