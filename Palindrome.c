#include <stdio.h>
void main()
{
    int num, n, rev=0, d;
    printf("Enter a num: ");
    scanf("%d",&num);
    n = num;

    while(n>0)
    {
        d = n%10;
        rev = rev*10 + d;
        n = n/10;
    }

    if(num==rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
