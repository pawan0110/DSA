#include<iostream>
using namespace std;
int main()
{
    int n=5; 
    // cout<<"enter value of n: "<<endl;
    // cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<< i ;
        }
        cout<<" "<<endl;
    }
    return 0;
}