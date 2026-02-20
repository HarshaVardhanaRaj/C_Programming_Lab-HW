#include <stdio.h>
int main()
{
    int marks[5], i, total = 0;

    for(i=0 ; i<5 ; i++)
    {
        printf("Enter marks in subject %d: ",(i+1));
        scanf("%d",&marks[i]);
    }

    for(i=0 ; i<5 ; i++)
        total = total + marks[i];

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
