#include<iostream>
using namespace std;

// modify array such that negative comes at left side and positive comes at rigt side

// method 1--> using temp array..
//  void swaparray(int arr[],int n)
//  {
//     int j=0;

//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]<0)
//         {
//           swap(arr[i],arr[j]);
//           j++;
//         }
//     }
//  }



//method 2--> two pointers approach....

void swaparray(int arr[],int n)
{
  int i=0;
  int left=0;
  int right=n-1;

  while(left<=right)
  {
    

     if(arr[left]<0)
    {
        left++;
    }

    else if(arr[right]>0)
    {
        right--;
    }

    else 
    {
        swap(arr[left],arr[right]);
        left++;
        right--;

    }

   } 
}


int main()
{
   
   int n=7;
   int arr[7]={2,3,-4,3,-5,-5,7};

    swaparray(arr,n);

   for(int i=0; i<n; i++)
   {
        cout<<arr[i]<<" ";
   }

   return 0;
}








