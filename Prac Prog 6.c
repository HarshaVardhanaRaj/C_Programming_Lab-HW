#include <stdio.h>

typedef struct
{
    int rn;
    char name[20];
    int marks[3];
}STUDENT;

void calculate(STUDENT *pt, int m);
void calculate(STUDENT *pt, int m)
{
    printf("\n");
    int i, j, total = 0;
    float avg;
    for(i=0 ; i<m ; i++)
    {
        for(j=0 ; j<3 ; j++)
            total = total + pt[i].marks[j];
        avg = total/3;
        printf("Total Marks of Student %d = %d\n",(i+1),total);
        printf("Average Marks of Student %d = %2f\n",(i+1),avg);
        total =0;
        printf("\n");
    }
}


int main()
{
    int n, i, j;
    printf("How many students? : ");
    scanf("%d",&n);

    STUDENT arr[n], *ptr;

    for(i=0 ; i<n ; i++)
    {
        printf("For Student %d: \n",(i+1));
        printf("Enter Roll.No: ");
        scanf("%d",&arr[i].rn);
        printf("Enter Name: ");
        scanf("%s",&arr[i].name);

        for(j=0 ; j<3 ; j++)
        {
            printf("Subject %d Marks: ",(j+1));
            scanf("%d",&arr[i].marks[j]);
        }

    }
    ptr = arr;
    calculate(ptr, n);

    return 0;
}
