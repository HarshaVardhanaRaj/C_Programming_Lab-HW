#include <stdio.h>
#include <string.h>
int main()
{
char str[] = "Hello";
char *ptr = strrchr(str, 'l');

if (ptr != NULL)
printf("Last occurrence at position: %ld\n", ptr - str);

return 0;

}
