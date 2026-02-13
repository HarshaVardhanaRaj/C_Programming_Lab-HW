#include <stdio.h>
#include <string.h>
int main()
{
char str[] = "hello123";
int len = strcspn(str, "0123456789");
printf("Length before number: %d\n", len);
return 0;
}
