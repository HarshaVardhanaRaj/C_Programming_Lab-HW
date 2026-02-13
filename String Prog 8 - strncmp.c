#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "C Programming";
    char s2[] = "C Programmer";

    int cmp = strncmp(s1,s2,8);
    if(cmp==0)
        printf("Both string are Equal");
    else
        printf("Difference = %d",cmp);
    return 0;
}
