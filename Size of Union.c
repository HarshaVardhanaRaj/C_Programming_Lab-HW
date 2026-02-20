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
    u1.i=10;
    printf("i = %d\n", u1.i);
    u1.f=20.0;
    printf("f = %f\n",u1.f);
    printf("size of i = %lu\n",sizeof(u1.i));
    printf("size of f = %lu\n",sizeof(u1.f));
    printf("size of name = %lu\n", sizeof(u1.name));
    printf("size of union = %lu\n", sizeof(u1));
    return 0;
}
