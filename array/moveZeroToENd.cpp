#include<bits/stdc++.h>
using namespace std;

// vector<int> moveZero(vector<int> a, int n)
// {
//     vector<int> temp;
//     for(int i=0; i<n; i++)
//     {
//         if(a[i] != 0)
//         {
//             temp.push_back(a[i]);                    // t.c => O(2*n)
//         }                                            // s.c => O(n)
//     }
//     int tz = temp.size();
//     for(int i=0; i<tz; i++)
//     {
//         a[i]=temp[i];
//     }
//     for(int i = tz; i<n; i++)
//     {
//         a[i] = 0;
//     }
//     return a;
// }


 vector<int> moveZero(vector<int> a, int n) {
    int j = -1;
    for(int i=0; i<n; i++)
    {
        if(a[i] == 0)
        {
            j = i;
            break;
        }                                    // t.c => O(n)
    }                                        // s.c => O(1)
    for(int i = j+1; i<n; i++)
    {
        if(a[i] != 0)
        {
            swap(a[j],a[i]);
            j++;
        }
    }
    return a;
 }


int main() {
    vector<int> arr = {1,2,30,0,0,5,0,7,7};
    int n = arr.size();
    vector<int> ans = moveZero(arr, n);
    for(auto &it: ans)
    {
        cout<<it <<" ";
    }

    return 0;
}