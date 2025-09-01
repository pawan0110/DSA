#include<iostream>
using namespace std;


void print7(int n)


{
    int i,j;

    for(int i=0; i<n; i++)
    {
        for( j=0; j<(n-i-1); j++)
        {
           cout<<"  ";
        }
         for( j=0; j<(2*i+1); j++)
        {
           cout<<"* ";
        }
         for( j=0; j<n-i-1; j++)
        {
           cout<<"  ";
        }
        cout<<endl;
    }
}

void print8(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            cout<<" ";
        }
        for(int j=0; j<(2*n - 2*i -1); j++)
        {
        cout<<"*";
        }
        for(int j=0; j<i; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}

void print9(int n)
{   int i,j;
    for( i=0; i<n; i++)
    {
        for( j=0; j<(n-i-1); j++)
        {
            cout<<" ";
        }
         for( j=0; j<(2*i+1); j++)
        {
            cout<<"*";
        }
         for( j=0; j<(n-i-1); j++)
        {
            cout<<" ";
        }
         
        cout<<endl;

    }

    for(i=0; i<n; i++)
    {
        for( j=0; j<i; j++)
        {
            cout<<" ";
        }
         for( j=0; j<(2*n-2*i-1); j++)
        {
            cout<<"*";
        }
         for( j=0; j<(n-i-1); j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}

void print10(int n)
{
   int i,j;

   for(i=0; i<n; i++)
   {
      for(j=0; j<(i+1); j++)
      {
         cout<<"*";
      }
      // for(j=0; j<(n-i-1); j++)
      // {
      //    cout<<" ";
      // }
      cout<<endl;

   }
    for(i=0; i<n; i++)
   {
      for(j=0; j<(n-i-1); j++)
      {
         cout<<"*";
      }
      // for(j=0; j<(i+1); j++)
      // {
      //    cout<<" ";
      // }
      cout<<endl;

   }
}

void print11(int n)
{
   int start=1;
   for(int i=0; i<n; i++)
   {
      if(i%2==0) start=1;
      else start=0;

      for(int j=0; j<=i; j++)
      {
         cout<<start<<" ";
         start=1-start;
      }
      cout<<endl;
   }
   

}

void print12(int n)

{
   int space=2*(n-1);

   for(int i=1; i<=n; i++)
   {
      for(int j=1; j<=i; j++)
      {
         cout<<j;
      }
      for(int j=1; j<=space; j++)
      {
         cout<<" ";
      }
      for(int j=i; j>=1; j--)
      {
         cout<<j;
      }
      cout<<endl;
      space -=2;
   }
}

void  print13(int n)
{
   int num=1;
   for(int i=1; i<=n; i++)
   {
      for(int j=1; j<=i; j++)
      {
         cout<<num;
         num++;
      }
      cout<<endl;
   }
}

void print14(int n)
{
   
   for(int i=0; i<=n; i++)
   {
      for(char ch = 'A'; ch<='A'+i;ch++)
      {
              cout<<ch<<" ";
      }
      cout<<endl;
      
      
   }
}

void print15(int n)
{
   
   for(int i=0; i<=n; i++)
   {
      for(char ch = 'A'; ch<='A'+(n-i-1);ch++)
      {
              cout<<ch<<" ";
      }
      cout<<endl;
      
      
      
   }
}


void print16(int n)
{
   for(int i=0; i<n; i++)
   {
          char ch = 'A'+i;
          for(int j=0;j<=i;j++)
          {
              
              // same char is to be printed i times in that row.
              cout<<ch<<" ";
              
          }
          cout<<endl;
   }
}
  
void print17(int n)
{
   for(int i=0; i<n; i++)
   {
      for(int j=0; j<(n-i-1); j++)
      {
         cout<<" ";
      }

      char ch='A';
      int breakpoint=(2*i+1)/2;
      for(int j=1; j<=(2*i+1); j++)
      {
         cout<<ch;
         if(j<=breakpoint) ch++;
         else ch--;
         
      }

      for(int j=0; j<(n-i-1); j++)
      {
         cout<<" ";
      }
      cout<<endl;
   }
}



void print18(int N)
{
      // Outer loop for the no. of rows.
      for(int i=0;i<N;i++){
          
          // Inner loop for printing the alphabets from
          // A + N -1 -i (i is row no.) to A + N -1 ( E in this case).
          for(char ch =('A'+N-1)-i;ch<=('A'+N-1);ch++){
              
              cout<<ch<<" ";
          }
          
          // As soon as the letters for each iteration are printed, we move to the
          // next row and give a line break otherwise all letters
          // would get printed in 1 line.
          cout<<endl;
      }
}

void print19(int N)
{
   
  // for the upper half of the pattern.
      
      // initial spaces.
      int iniS = 0;
      for(int i=0;i<N;i++){
          
          //for printing the stars in the row.
          for(int j=1;j<=N-i;j++){
              cout<<"*";
          }
          
          //for printing the spaces in the row.
          for(int j=0;j<2*i;j++){
              cout<<" ";
          }
          
          //for printing the stars in the row.
          for(int j=1;j<=N-i;j++){
              cout<<"*";
          }
          
          // The spaces increase by 2 every time we hit a new row.
          iniS+=2;
          
          // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
      }
      
     // for lower half of the pattern
      
      // initial spaces.
      iniS = 2*N -2;
      for(int i=1;i<=N;i++)
      {
          
          //for printing the stars in the row.
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          
          //for printing the spaces in the row.
          for(int j=0;j<iniS;j++){
              cout<<" ";
          }
          
          //for printing the stars in the row.
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          
          // The spaces decrease by 2 every time we hit a new row.
          iniS-=2;
          
          // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
      }
      

}




void print20(int n)
{
      // initialising the spaces.
      int spaces = 2*n-2;
      
      // Outer loop for printing row.
      for(int i = 1;i<=2*n-1;i++){
          
          // stars for first half
          int stars = i;
          
          // stars for the second half.
          if(i>n) stars = 2*n - i;
          
          //for printing the stars
          for(int j=1;j<=stars;j++){
              cout<<"*";
          }
          
          //for printing the spaces
          for(int j = 1;j<=spaces;j++){
              cout<<" ";
          }
          
          //for printing the stars
          for(int j = 1;j<=stars;j++){
              cout<<"*";
          }
          
          // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
          if(i<n) spaces -=2;
          else spaces +=2;
      }
      

}


















int main()
{
    int n=5;
//print7(n);
//print8(n);
//print9(n);
//print10(n);
//print11(n);
//print12(n);
//print13(n);
//print14(n);
//print15(n);
//print16(n);
//print17(n);
//print18(n);
//print19(n);
print20(n);
    return 0;
}