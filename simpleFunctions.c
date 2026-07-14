/* DEFINITION OF A FUNCTION

return_type function_name(type1 id1, type2 id2, ...)
{
    // body of the function
    return expression;
}


TO CALL A FUNCTION
function_name(arg1, arg2, ...);

FUNCTION DELCARATION
return_type function_name(parameter list);

*/

#include <stdio.h>
#include <stdlib.h>

// summation function

int sum(int a, int b)
{
    int result = a + b;
    return result;
}

void printStudents(int students)
{
    printf("students = %d\n", students);
}

int main()
{
    int students, girls = 12, boys = 8;
    students = sum(girls, boys);
    printStudents(students);
    return EXIT_SUCCESS;
}
