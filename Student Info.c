#include <stdio.h>

void main()
{
    char name[50];
    long reg;
    int roll;

    printf("Enter your Name: ");
    scanf("%s",&name);

    printf("Enter your Register no.: ");
    scanf("%lld",&reg);

    printf("Enter your Roll no.: ");
    scanf("%d",&roll);

    printf("Name = %s\n",name);
    printf("Register = %lld\n",reg);
    printf("Roll = %d\n",roll);
}
