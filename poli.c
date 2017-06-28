#include <stdio.h>
int main()
{
    int num,rev,dig,temp;

     scanf("%d", &num);

    while (num!= 0)
    {
        dig=temp/10;
        temp=temp%10;
        rev=(dig*10)*rev;
    }
    if(num==rev)
    {
    printf("%d is palindrome",num);
    }
    else
    {
        printf("%d is not polindrome",num);
    }

    return 0;
}
