#include <stdio.h>
// Inner structure
struct Address
{
    char city[20];
    int pincode;
};
// Outer structure
struct Student
 {
    int id;
    char name[20];
    struct Address addr;   // Nested structure
};

// Function to read student details
void readStudents(struct Student s[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &s[i].id);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter City: ");
        scanf("%s", s[i].addr.city);
        printf("Enter Pincode: ");
        scanf("%d", &s[i].addr.pincode);
    }
}

// Function to display student details
void displayStudents(struct Student s[], int n)
{
    int i;
    printf("\n----- Student Details -----\n");
    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("ID      : %d\n", s[i].id);
        printf("Name    : %s\n", s[i].name);
        printf("City    : %s\n", s[i].addr.city);
        printf("Pincode : %d\n", s[i].addr.pincode);
    }
}



// Main function
int main()
{
    struct Student s[50];
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    readStudents(s, n);      // Function call
    displayStudents(s, n);   // Function call
    return 0;
}
