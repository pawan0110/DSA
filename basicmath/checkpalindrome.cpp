#include<iostream>
using namespace std;



int main()
{
   int n;
   cin>>n;
   int a = n;

   int reverse = 0;
    while(n>0)
    {
        int digits = n % 10;
        reverse = (reverse*10) + digits;
        n = n/10;
    }

    if(reverse == a)
    {
        cout<<a<< " is palindrome"<<endl;
    }
    else
    {
        cout<<a<<" is not palindrome"<<endl;
    }

    return 0;
}