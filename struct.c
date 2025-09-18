// Create a structure called "Student" with members name, age, and total marks. Write a C program to input data for two students, display their information, and find the average of total marks.
#include <cs50.h>
#include <stdio.h>

typedef struct
{
    string name;
    string age;
    int totmarks;
}student;

int main (void)
{
    student student[4];

    student[0].name = "Andrew";
    student[0].age = "23";
    student[0].totmarks = 190;

    student[1].name = "Gloria";
    student[1].age = "28";
    student[1].totmarks = 204;

    student[2].name = "Mario";
    student[2].age = "21";
    student[2].totmarks = 186;

    student[3].name = "Sara";
    student[3].age = "24";
    student[3].totmarks = 234;

    printf("Names: ");
    for (int i = 0; i < 4; i++)
    {
        printf("%s ", student[i].name);
    }
    printf("\n");

    printf("Ages: ");
    for (int i = 0; i < 4; i++)
    {
        printf("%s ", student[i].age);
    }
    printf("\n");
    printf("Average mark: %i", (student[0].totmarks+student[1].totmarks+student[2].totmarks+student[3].totmarks)/4);

    return 0;
}
