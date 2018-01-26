#include<stdio.h>
 
int main()
{
   int n, f= 0, s= 1,third, c;
 
   printf("Enter the number of terms\n");
   scanf("%d",&n);
 
   printf(" %d terms of Fibonacci series are",n);
 
   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         third = c;
      else
      {
         third = f + s;
         f= s;
         s = third;
      }
      printf("%d\n",third);
   }
 
   return 0;
}
