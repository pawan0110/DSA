#include<iostream>
#include<vector>
using namespace std;

void RemoveDuplicate(vector<int>& arr)
{
    int n = arr.size();
    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] == arr[i+1])
        {
            arr.erase(arr.begin() + i + 1);
            i--; // Move back one index to check for more duplicates.
            n--; // Decrease the size of the array.
        }
    }
    cout << "k: " << arr.size() << endl;
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {1, 1, 2, 3, 2, 3, 4, 5};
    RemoveDuplicate(arr);
    return 0;
}
