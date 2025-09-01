#include <bits/stdc++.h>
using namespace std;

// vector<int> findUnion(vector<int>arr1, vector<int>arr2)
// {
//     vector<int> temp;
//     int n1 = arr1.size();
//     int n2 = arr2.size();
//     set<int> s;

//     for(int i=0; i<n1; i++)
//     {                                                           //t.c => (n1+n2)log(n1+n2)
//         s.insert(arr1[i]);                                      // s.c => n1+n2
//     }
//     for(int i=0; i<n2; i++)
//     {
//         s.insert(arr2[i]);
//     }

//     for(auto &it : s)
//     {
//         temp.push_back(it);
//     }
//     return temp;
    
// }





vector<int> findUnion(vector<int> arr1, vector<int> arr2) {
    vector<int> Union;
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i = 0, j = 0;  // Initialize i

    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            if (Union.size() == 0 || Union.back() != arr1[i]) {
                Union.push_back(arr1[i]);
            }
            i++;
        } else {
            if (Union.size() == 0 || Union.back() != arr2[j]) {
                Union.push_back(arr2[j]);
            }
            j++;
        }
    }
    
    while (i < n1) {
        if (Union.back() != arr1[i]) {
            Union.push_back(arr1[i]);
        }
        i++;
    }
    
    while (j < n2) {
        if (Union.back() != arr2[j]) {
            Union.push_back(arr2[j]);
        }
        j++;
    }

    return Union;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5, 6};
    vector<int> arr2 = {1, 2, 3, 4, 5};
    vector<int> Union = findUnion(arr1, arr2);

    for (auto &val : Union) {
        cout << val << " ";
    }
    return 0;
}