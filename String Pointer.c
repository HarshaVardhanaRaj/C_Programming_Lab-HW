#include <stdio.h>

int main() {
    char str[] = "C Programming";
    char *ptr = str;

    while(*ptr) {
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}
