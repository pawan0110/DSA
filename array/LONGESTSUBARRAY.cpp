#include <bits/stdc++.h>
using namespace std;

int longestsubarray(vector<int> &arr , long long k)
{
    int n = arr.size();
    int len =0;
    
    for(int i=0; i<n; i++)
    {
        
        for(int j=i; j<n; j++)
        {
          long long sum=0;
          for(int k=i; k<j; k++)
          {
            sum +=arr[k];
          }
          if(sum == k)
          {
            len = max(len, (j-i+1));
          }
        }
    }
    return len;
}

int main() 
{
    long long k = 2;
    vector<int> arr ={1,2,3,1,1,1,1};
    int ans = longestsubarray(arr , k);
    cout<<"the longest subarray whom summation is equal to k is: "<<ans<<endl;
    return 0;
}



