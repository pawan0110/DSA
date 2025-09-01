#include<iostream>
using namespace std;

void Reverseno( int n)
{
    int reverse = 0;
    while(n>0)
    {
        int digits = n % 10;
        reverse = (reverse*10) + digits;
        n = n/10;
    }
    cout<<reverse<<endl;

    
}


int main()
{ 
   int n;
   cout<<"enter your number"<<endl;
   cin>>n;

   
    Reverseno(n);
      
   

  return 0;
}    
