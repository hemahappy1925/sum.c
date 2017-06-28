#include<stdio.h>
int main()
{
 int n,i,sum=0;
 printf("Enter the Number : ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  printf("%d ",i);
 sum=sum+i;
 }
 printf("\nSum of  %d is : %d ",n,sum);
return 0;
}
