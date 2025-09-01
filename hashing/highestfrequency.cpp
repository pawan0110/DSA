#include <bits/stdc++.h>
using namespace std;
 
void Frequency(int arr[], int n)
{
    unordered_map<int,int> mpp;
   
    for(int i=0; i<n; i++)
    {
        mpp[arr[i]]++;
    }
    int min=n; int max= 0;
    int minelem = 0; int maxelem = 0;

    for(auto it : mpp)
    {
        int count = it.second;
        int elem = it.first;

        
        if(min>count)
       {
           min = count;
           minelem = elem;
       }
       if(max<count)
       {
           max = count;
          maxelem = elem;
       }
      

    }
     cout << "The highest frequency element is: " << maxelem << "\n";
       cout << "The lowest frequency element is: " << minelem<< "\n";
   
}
 
int main()
{
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Frequency(arr, n);
    return 0;
}