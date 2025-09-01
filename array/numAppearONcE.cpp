#include<bits/stdc++.h>
using namespace std;

// int FINDNUMAPPEARONCE(vector<int> nums)
// {
    
//    for(int i=0; i<nums.size(); i++)
//    {
//      int value = nums[i];
//      int count = 0;                                  // time complexity: O(n)
//      for(int j=0; j<nums.size(); j++)
//      {
//         if(nums[j] == value)
//         count++;
//      }
//      if(count == 1)
//      return value;
//    }
//    return 0;(
// }


//  int FINDNUMAPPEARONCE(vector<int> nums)
//  {
//     int maxi = nums[0];
//     for(int i=0; i<nums.size(); i++)
//     {
//       maxi = max(maxi,nums[i]);
//     }

//     vector<int> hash(maxi + 1, 0);
//     for(int i=0; i<nums.size(); i++)
//     {                                             // T.C => N+N+N => O(N)
//       hash[nums[i]]++;                            // S.C => O(MAXI+1)
//     }

//    for(int i=0; i<nums.size(); i++)
//    {
//       if(hash[nums[i]] == 1)
//       return nums[i];
//    }
//    return -1;
//  }

 int FINDNUMAPPEARONCE(vector<int> nums)
 {
    map<int, int>mpp;
    for(int i=0; i<nums.size(); i++)
    {
      mpp[nums[i]]++;
    }
    for(auto it: mpp)                                        // T.C  ORDERED MAP O(LOGN)                                                       
    {                                                      // T.C    UNORDERED MAP BEST => O(1)      
      if(it.second == 1)                                  // WORST CASE IS O(N)
      return it.first;                                    // S.C => 0(N/2)
    }
   return -1;
 }
int main()
{
    vector<int> nums ={1,0,1,0,2};
    int ans = FINDNUMAPPEARONCE(nums);
    cout<<"nums appears once is "<<ans<<endl;
    return 0;
}