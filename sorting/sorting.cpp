 #include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min_index = i; // Changed min to min_index
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index = j;
            }
        }
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
        
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}


void bubble_sort(int arr[], int n)
{
    for(int i=n-1; i>0; i--)
    {
        for(int j=0; j<i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void insertion_sort(int arr[], int n)
{
    for(int i = 1; i < n; i++) // Start from the second element
    {
        int key = arr[i]; // Element to be inserted
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key, to one position ahead
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j]; // Shift element to the right
            j--;
        }
        arr[j + 1] = key; // Insert the key into its correct position
    }

    // Print the sorted array
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}





void merge(int arr[], int n, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    
    // Merging two halves
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    
    // If there are remaining elements in the left half
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    
    // If there are remaining elements in the right half
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }
    
    // Copying the sorted elements back to the original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void merge_sort(int arr[], int n, int low, int high) {
    if (low >= high) {
        return;
    }
    
    int mid = low + (high - low) / 2;
    merge_sort(arr, n, low, mid);
    merge_sort(arr, n, mid + 1, high);
    merge(arr, n, low, mid, high);
}

int main() {
    int arr[] = {112, 22, 1, 0, 11, -5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // int low = 0;
    // int high = n - 1;
    
    // merge_sort(arr, n, low, high);
    
    // cout << "Array after merge_sort:" << endl;
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;


    
    
    return 0;
}





