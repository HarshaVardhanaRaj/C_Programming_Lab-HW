#include <stdio.h>
float calc(int m1, int m2, int m3);
float calc(int m1, int m2, int m3)
{
    if(m1>=40 && m2>=40 && m3>=40)
    {
     float avg = (m1+m2+m3)/3.0;
     return avg;
    }
    else
        return 0;
}

void main()
{
    int x, y, z;
    float res;
    printf("Enter the marks in Subject 1: ");
    scanf("%d",&x);
    printf("Enter the marks in Subject 2: ");
    scanf("%d",&y);
    printf("Enter the marks in Subject 3: ");
    scanf("%d",&z);
    res = calc(x,y,z);
    if(res==0)
        printf("Fail");
    else
    {
        printf("Pass \n");
        printf("Average = %f\n",res);
    }
}
