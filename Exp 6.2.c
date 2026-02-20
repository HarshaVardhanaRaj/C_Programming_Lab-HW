#include <stdio.h>
int main()
{
    int a, b, ch;

    printf("Enter 2 Numbers: ");
    scanf("%d %d",&a,&b);

    printf("Enter 1 to add, 2 to subtract, 3 to multiply, or 4 to divide: ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
            printf("%d + %d = %d",a,b,(a+b));
            break;
        case 2:
            printf("%d - %d = %d",a,b,(a-b));
            break;
        case 3:
            printf("%d x %d = %d",a,b,(a*b));
            break;
        case 4:
            printf("%d / %d = %f",a,b,((float)a/(float)b));
            break;
        default:
            printf("Invalid choice.");
    }
    return 0;
}
