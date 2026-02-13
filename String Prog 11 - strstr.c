#include <stdio.h>
#include <string.h>
int main()
{
char str[] = "I love C programming";
char *ptr = strstr(str, "C");

if (ptr != NULL)
printf("Substring found: %s\n", ptr);

return 0;
}
