#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr, int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            // lower bound found:
            return i-1;                        // t.c => n
        }   
       // cout<<arr[i]<<endl;                                 // s.c => 1
    }
    return n;
};


// int lowerBound(vector<int> arr, int n, int x) {
//   int low = 0 ;
//   int high  = n-1;
//   int ans = 0;

//   while(low<=high) {
//     int mid = (low+high)/2;

//     if(arr[mid] <= x) {                             // t.c => logn
//         ans = mid;                                  // s.c => o(1)
//         low = mid + 1;
//     } else {
//         high = mid-1;
//     }
//     return ans;
//   }
// };

int main()
{
    vector<int> arr = {3, 5, 8, 15, 19};
    int n = 5, x = 9;
    int ind = lowerBound(arr, n, x);
    cout << "The lower bound is the index: " << ind << "\n";
    return 0;
}


