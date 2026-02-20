#include <stdio.h>
int main()
{
    int a, b, c, d, e, total = 0;

    printf("Enter marks for 5 subjects: ");
    scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);

    total = a+b+c+d+e;
    float avg = total/5;

    printf("Total Marks: %d\n",total);
    printf("Average Marks: %f\n",avg);

    printf("Status: ");
    if(avg>=40.0)
        printf("Pass\n");
    else
        printf("Fail\n");

    return 0;
}
