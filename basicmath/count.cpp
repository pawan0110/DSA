#include<iostream>
using namespace std;



 int count(int N)
 {
    int count = 0;  

    for (int temp = N; temp > 0; temp /= 10) {  

        int ld = temp % 10;  

        if (ld != 0 && N % ld == 0) {  

            count++;  

        }  

    }  

    return count; 
 }
int main()
{ 
   int N;
   cout<<"enter your number"<<endl;
   cin>>N;

    int num=count(N);
    cout<<num<<endl;
}

    
