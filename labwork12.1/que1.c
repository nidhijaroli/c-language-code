#include <stdio.h>

// Define the structure for student record
struct Student {
    int stu_id;
    char stu_name[50];
    int stu_age;
    char stu_course[50];
    char stu_city[50];
    int stu_standard;
    char stu_school[50];
};

int main() {
    // Create an array of struct Student to store the records of 3 students
    struct Student students[3];

    // Read the information for each student using a loop
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Student ID: ");
        scanf("%d", &students[i].stu_id);
        printf("Student Name: ");
        scanf("%s", students[i].stu_name);
        printf("Student Age: ");
        scanf("%d", &students[i].stu_age);
        printf("Student Course: ");
        scanf("%s", students[i].stu_course);
        printf("Student City: ");
        scanf("%s", students[i].stu_city);
        printf("Student Standard: ");
        scanf("%d", &students[i].stu_standard);
        printf("Student School: ");
        scanf("%s", students[i].stu_school);
        printf("\n");
    }

    // Display the information for each student
    printf("Student Records:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Student ID: %d\n", students[i].stu_id);
        printf("Student Name: %s\n", students[i].stu_name);
        printf("Student Age: %d\n", students[i].stu_age);
        printf("Student Course: %s\n", students[i].stu_course);
        printf("Student City: %s\n", students[i].stu_city);
        printf("Student Standard: %d\n", students[i].stu_standard);
        printf("Student School: %s\n", students[i].stu_school);
        printf("\n");
    }

    return 0;
}
