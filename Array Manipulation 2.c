#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, temp;
    char word[100];

    printf("Enter a word: ");
    scanf("%s",word);

    int n = strlen(word), mid=(n+1)/2;
    i = 0, j = n-1;

    while(i<j)
    {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
        i++;
        j--;
    }
    printf("%s ",word);
}
