#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,2,3,5,6,7};
    int n = 7;
    int sum = 0;
    int total = (n*(n+1)) / 2;
    
    for(int i=0; i<(n-1); i++)
    {
        sum = sum + arr[i];

    }
    int missing_num = total - sum;
    cout<<"missing num is : "<<missing_num <<endl;
    return 0;
}