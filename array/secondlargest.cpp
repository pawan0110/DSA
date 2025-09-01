#include<bits/stdc++.h>
using namespace std;


// brute code.........
// int seccondlargest(int arr[],int n)
// {
//     sort(arr,arr+n);   => nlogn
//    
//     int secondlargest;
//     for(int i = n-2; i>0; i--)                time complexity => nlogn + n => nlogn
//     {
//         if(arr[n-1] != arr[i])
//         {
//             secondlargest = arr[i];
//             break;
//         }
//     }
//     return secondlargest;
// }


//better approach.............
// int secondlargest(int arr[], int n)
// {    int largest = INT_MIN;
//      int secondlargest = INT_MIN;
//      for(int i=0; i<n; i++)
//      {                                     time complexity => o(N)
//         if(arr[i] > largest)
//         {
//             largest = arr[i];
//         }
//      }
//      for(int i=0; i<n; i++)
//      {
//           if(arr[i]> secondlargest && arr[i] != largest)
//         {
//             secondlargest = arr[i];
//         }
//      }
//     return secondlargest;
// }




//best approach.....

secondlargest(int arr[], int n)
{
    int largest = arr[0];
    int slargest = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(arr[i]> largest && arr[i] != largest)
        {                                                // time complexity = O(N)
            slargest = largest;
            largest = arr[i];
        }
    }
    return slargest;
}




int main()
{
    int arr[]={11,22,33,66,44,88,88};
    int n = sizeof(arr)/sizeof(arr[0]);
    int num = secondlargest(arr,n);
    cout<<"second largest number is: "<<num<<endl;
    return 0;
}