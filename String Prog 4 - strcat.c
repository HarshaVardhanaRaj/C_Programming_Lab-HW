#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "Hello ";
    char s2[] = "World";

    strcat(s1, s2);
    printf("Concatenated String: %s\n",s1);

    return 0;
}
