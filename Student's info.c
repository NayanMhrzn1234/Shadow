#include <stdio.h>

struct student
{
    int roll;
    char name[30];
    float marks;
};

int main()
{
    struct student s;

    // Input details
    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);
    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
    if (s.marks > 40)
        printf("Remarks: Passed\n");
    else
        printf("Remarks: Failed\n");

    return 0;
}
