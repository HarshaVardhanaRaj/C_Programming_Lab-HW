#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "C Programming";

    char *ptr = strchr(str,'r');

    if(ptr!=NULL)
        printf("Char is found at pos = %d\n",ptr-str);

    return 0;
}
