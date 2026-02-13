#include <stdio.h>
#include <string.h>
int main()
{
    char src[] = "C Programming";
    char dest[50];

    strncpy(dest, src, 5);
    dest[5] = '\0';
    printf("Copied String: %s\n",dest);

    return 0;
}
