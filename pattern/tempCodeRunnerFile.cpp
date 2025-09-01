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
      for(char ch='A'; ch<=('A'+i); ch++)