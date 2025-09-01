#include<iostream>
#include<string.h>
using namespace std;


int findLength(char ch[], int size)
{  int index = 0;
   while(ch[index] != '\0')
   {
       index++;
   }
    return index;
}

void reversestring(char ch, int len)
{
    int i = 0;
    int j = len -1;
    while(i <= j)
    {
       swap(ch[i], ch[j]);
	   i++;
	   j--;
    }
}

int main()
{

    char ch[100];
 
  //cin >> ch;
  cin.getline(ch, 100);

  int len = findLength(ch, 100);

  cout << len << endl;
   

   reversestring();

return 0;

}






// int search(vector<int>& nums, int target) {
// 		int l = 0, r = nums.size() - 1;
// 		while(l <= r){
// 			int mid = l + (r-l)/2;
// 			if(nums[mid] == target) return mid;
// 			else if(nums[l]>=nums[mid]){
// 				if(nums[l]<=target && target<nums[mid]) r = mid-1;
// 				else l = mid+1;
// 			}
// 			else{
// 				if(nums[mid]<target && target<=nums[r]) l = mid+1;
// 				else r = mid-1;
// 			}
// 		}
// 		return -1; // No need to debug this line.
// }



// int search(vector<int>& nums, int target) {
// 		int l = 0, r = nums.size() - 1;
// 		while(l <= r){
// 			int mid = l + (r-l)/2;
// 			if(nums[mid] == target) return mid;
// 			else if(nums[l]<=nums[mid]){
// 				if(nums[l]<=target && target<nums[mid]) r = mid-1;
// 				else l = mid+1;
// 			}
// 			else{
// 				if(nums[mid]<target && target<=nums[r]) l = mid+1;
// 				else r = mid-1;
// 			}
// 		}
// 		return -1;
// 	}

// int main()
// {
    

//     int search(vector<int>& nums, int target)
	
// }