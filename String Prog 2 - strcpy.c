#include <stdio.h>
#include <string.h>
int main()
{
    char src[] = "C Programming";
    char dest[50];

    strcpy(dest, src);
    printf("Copied String: %s\n",dest);

    return 0;
}
