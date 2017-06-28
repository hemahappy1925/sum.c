#include<stdio.h>
int main()
{
      long long num;
       int n=0;
       printf("Enter the Number : ");
       scanf("%lld",&num);
       while(num!=0)
           {
              n++;
              num/=10;
           }
           printf("\nnum of  %d",n);
         return 0;
}
