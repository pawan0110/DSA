#include<iostream>
using namespace std;

int main()
{
    int n=7;
    int left=0;
    int right =n-1;
    int arr[7]={1,2,3,4,5,6,7};

    while(left<=right)
    {
         if(left == right) 
         {
           cout << arr[left] << endl;  
         }
          else
          {
            cout<<arr[left]<<endl;
            cout<<arr[right]<<endl;
          }
          left++;
          right--;
    }
    return 0;
}