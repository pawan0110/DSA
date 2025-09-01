#include<iostream>
#include<vector>
using namespace std;


void rotate(vector<int>& nums,int k)
{
    int n= nums.size();
    vector<int>ans(n);
    for(int index=0; index<n; index++)
    {
        int newindex=(index+k)%n;
        ans[newindex]=nums[index];
    }
    nums=ans;

}


int main()
{
    vector<int>nums={10,20,30,40,50,60};
    int n= nums.size();
    int k=2;

   rotate(nums,k);
    for(int i=0; i<n; i++)
    {
        cout<<nums[i]<<" ";
    }
    


    return 0;
}
