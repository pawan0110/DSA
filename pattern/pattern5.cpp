#include<iostream>
using namespace std;
// int main()
// {
//     int n=5; 
//     // cout<<"enter value of n: "<<endl;
//     // cin>>n;

//     for(int i=1; i<n; i++)
//     {
//         for(int j=0; j<(n-i+1); j++)
//         {
//             cout<< "* " ;
//         }
//         cout<<" "<<endl;
//     }
//     return 0;
// }


int main()
{
    int n=5; 
    // cout<<"enter value of n: "<<endl;
    // cin>>n;

    for(int i=1; i<n; i++)
    {
        for(int j=n; j>i; j--)
        {
            cout<< "* " ;
        }
        cout<<" "<<endl;
    }
    return 0;
}