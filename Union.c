#include<stdio.h>
union data
{
    int i;
    float f;
    char name[20];
};

int main()
{
    union data u1;

    u1.i = 10;
    printf("i = %d\n", u1.i);

    u1.f = 20.0;
    printf("f = %f\n",u1.f);

    printf("Enter name: ");
    scanf("%s",u1.name);
    printf("Name = %s",u1.name);

    return 0;
}
