#include <iostream>
#include <vector>
using namespace std;

void sortARRAY(vector<int>& arr, int n)
{
    int left = 0;
    int right = n - 1;
    int index=0;

       while(index <= right) 
       {

            if(arr[index] == 0) 
            {
                swap(arr[index], arr[left]);
                left++;
                index++;
            }
            else if(arr[index] == 2) 
            {
                swap(arr[index], arr[right]);
                right--;
                //catch -> no need of index++
                //index++
            }
            else
            {
                index++;
            }
    }
 

 
        
}        

int main()
{
    // sort array in such a way that 0 comes on the left, 1 comes in between, and 2 comes on the right.
    vector<int> arr = {0, 1, 2, 0, 2, 0, 1};
    int n = arr.size();

    sortARRAY(arr, n);

    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
