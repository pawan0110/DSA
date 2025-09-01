#include <bits/stdc++.h>
using namespace std;

int findmaxconOne(vector<int> nums)
{
    int count = 0;
    int maxi = 0;
    for(int i=0; i<nums.size(); i++)
    {

        if(nums[i]==1)
        {
            count++;
        }
        else
        count = 0;
        maxi = max(maxi,count);
    }
    return maxi;
}

int main()
{
    vector<int> nums = {1,1,0,1,1,1};
    int ans = findmaxconOne(nums);
    cout<<"the max consecutive one is "<<ans<<endl;
    return 0;
}