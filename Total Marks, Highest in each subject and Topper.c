#include <stdio.h>
void main()
{
    int i, j, data[10][6], s=0, total_marks[10];
    for (i = 0; i < 10; i++)
    {
        printf("For Student %d:\n",(i+1));
        for (j = 1; j < 6; j++)
        {
            printf("Enter marks in Subject %d: ",j);
            scanf("%d", &data[i][j]);
        }
        printf("\n\n");
    }

    for (i = 0; i < 10; i++)
    {
        printf("For Student %d, ",(i+1));
        for (j = 1; j < 6; j++)
        {
            s = s + data[i][j];
        }
        printf("Total Marks = %d",s);
        total_marks[i]=s;
        s=0;
        printf("\n\n");
    }

    int max=0, topper=0;
    for (j = 1; j < 6; j++)
    {
        for (i = 0; i < 10; i++)
        {
            if(data[i][j]>max)
            {
                max = data[i][j];
                topper = i+1;
            }
        }
        printf("Highest Marks in Subject %d: ",j);
        printf("%d\n",max);
        printf("Obtained by Student %d.",topper);
        max=0, topper=0;
        printf("\n\n");
    }

    max = total_marks[0];
    for(i=0 ; i<10 ; i++)
        if(total_marks>max)
        {
            //printf("%d, ",total_marks[i]);
            max = total_marks[i];
            topper = i+1;
        }
    printf("\n");
    printf("Maximum Total Marks = %d, ",max);
    printf("Obtained by Student %d",topper);
}
