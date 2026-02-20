#include <stdio.h>

typedef struct
{
    int day;
    int month;
    int year;
}DATE;


typedef struct
{
    char name[20];
    int roll_no;
    DATE dob;
}STUDENT;


int main()
{
    STUDENT s1;

    printf("Enter student name: ");
    scanf(" %s", s1.name);
    printf("Enter roll no: ");
    scanf(" %d", &s1.roll_no);
    printf("Enter the year of birth: ");
    scanf("%d", &s1.dob.year);
    printf("Enter the month of birth: ");
    scanf("%d", &s1.dob.month);
    printf("Enter the day of birth: ");
    scanf("%d", &s1.dob.day);
    printf("\n\n");

    printf("Student Name = %s\n", s1.name);
    printf("Roll No = %d\n", s1.roll_no);
    printf("DOB: %d-%d-%d\n",s1.dob.day, s1.dob.month, s1.dob.year);

    return 0;
}
