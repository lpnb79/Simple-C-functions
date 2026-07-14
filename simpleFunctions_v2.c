#include <stdio.h>
#include <stdlib.h>

// this version declares the functions before they are used in main()

int sum(int a, int b);
void printStudents(int students);

int main()
{
    int students, girls = 12, boys = 8;
    students = sum(girls, boys);
    printStudents(students);
    return EXIT_SUCCESS;
}

int sum(int a, int b)
{
    int result = a + b;
    return result;
}

void printStudents(int students)
{
    printf("students = %d\n", students);
}