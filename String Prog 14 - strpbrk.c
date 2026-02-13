#include <stdio.h>
#include <string.h>
int main()
{
char str[] = "apple";
char *ptr = strpbrk(str, "aeiou");
if (ptr != NULL)
printf("First vowel found: %c\n", *ptr);
return 0;
}
