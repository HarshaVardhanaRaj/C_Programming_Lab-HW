#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "Hello ";
    char s2[] = "World";

    int cmp = strcmp(s1,s2);
    if(cmp==0)
        printf("Both string are Equal");
    else
        printf("Difference = %d",cmp);
    return 0;
}
