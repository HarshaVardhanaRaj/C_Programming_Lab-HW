#include <stdio.h>

struct student
 {
 int reg_no;
 char name[50];
 char course[50];
 float fees;
};


int main()
 {
 struct student s1;
 struct student *ptr;

 ptr = &s1;


    printf("Enter registration number: ");
    scanf("%d", &ptr->reg_no);

    printf("Enter student name: ");
    scanf(" %s", ptr->name);

    printf("Enter course: ");
    scanf(" %s", ptr->course);

    printf("Enter fees: ");
    scanf("%f", &ptr->fees);


    printf("\n-----Student Information-----\n");
    printf("Registration Number: %d\n", ptr->reg_no);
    printf("Name: %s\n", ptr->name);
    printf("Course: %s\n", ptr->course);
    printf("Fees: %.2f\n", ptr->fees);

    return 0;
}
