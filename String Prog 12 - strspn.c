#include <stdio.h>
#include <string.h>
int main()
{
char str[] = "123abc";
int len = strspn(str, "1234567890");
printf("Length of initial digits: %d\n", len);
return 0;
}
