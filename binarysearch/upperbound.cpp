#include<bits/stdc++.h>
using namespace std;

// int upperbound(vector<int> arr, int x) {
//   int n = arr.size();
//   for(int i =0; i<n; i++) {
//     if(arr[i] >x) {
//         return i;
//     }
//    // cout<<arr[i]<<endl;
//   }
//   return n;
// }


int upperbound(vector<int> arr, int x) {
    int n = arr.size();
    int low = 0; 
    int high = n-1;
    int ans =n;
    while(low<=high) {
        int mid = (low + high)/2;
        if(arr[mid] > x ) {
         ans = mid;
        high = mid - 1;
        } else {
            low = mid + 1;
        }
      
    }
      return ans;
}

int main() {
    vector<int> arr = {2,3,5,6,7,8,9,12,15,16};
    int x = 10;
    int ans = upperbound(arr, x);
    cout<<"upper bound index of given array is: "<<ans<<endl;
 }
