#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int target = 3;
    bool found = false;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << "target found at index: " << i << endl;
            found = true;
            break; // Exit the loop once the target is found
        }
    }
    
    if (!found) {
        cout << "target not found" << endl;
    }
    
    return 0;
}
