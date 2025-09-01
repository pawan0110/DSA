#include<iostream>
using namespace std;
int main()
{
   int n=6;
   int arr[7]={1,2,4,5,6,7};
   int left=0;
   int right=n-1;
   int i;
   for(i=0; i<n/2; i++)
 {
    swap(arr[left],arr[right]);
    left++;
    right--;
 }

 for(i=0;i<n;i++)
 {
    cout<<arr[i]<<" ";
 } 
    return 0;
}



// #include<iostream>
// using namespace std;

// int main()
// {
//     int n = 7;
//     int arr[7] = {1, 2, 3, 4, 5, 6, 7};
//     int left = 0;
//     int right = n - 1;

//     // Corrected loop to reverse the array
//     while (left < right) {
//         swap(arr[left], arr[right]);
//         left++;
//         right--;
//     }

//     // Print the reversed array
//     for(int i = 0; i < n; i++) {
//         cout << "The reversed array is: " << arr[i] << endl;
//     }

//     return 0;
// }
