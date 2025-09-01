#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

    int n1,n2;
    cout<<"enter value of n1 and n2: "<<endl;
    cin>>n1>>n2;

    int gcd = 1;

    for(int i=1; i<=min(n1,n2); i++)
    {
        if(n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }
    cout<<"the gcd of num1 and num2 is: "<<gcd<<endl;
    return 0;
}