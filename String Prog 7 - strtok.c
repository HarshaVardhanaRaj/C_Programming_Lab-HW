#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = {'H','e','l','l','o','\0'};
    char *str = strtok(s1, ",");
    printf("Tokenised String = %s", str);
    return 0;
}
