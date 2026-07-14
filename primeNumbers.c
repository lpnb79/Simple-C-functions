/*
This program finds and prints all prime numbers up to what the user inputs with max upper limit of 1000.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// user enters a number and the program prints all prime numbers smaller than or equal to that number
const int MAX = 1000;

// function to check if the number is out of bounds
bool outOfBounds(int limit)
{
    return (limit < 2 || limit > MAX);
}

// function to print error mesage if the number is out of bounds
void printLimitError()
{
    printf("Error: Your number must be between 2 and %d.\n", MAX);
}

bool isPrime(int number)
{
    bool prime = true;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int upperLimit;
    printf("enter the upper limit: ");
    scanf("%d", &upperLimit);

    if (outOfBounds(upperLimit))
    {
        printLimitError();
        return EXIT_FAILURE;
    }

    printf("Prime numbers up to %d:\n", upperLimit);
    for (int number = 2; number <= upperLimit; number++)
    {
        if (isPrime(number))
        {
            printf("%d \n", number);
        }
    }

    /* find first prime number above lower limit*/

    int lowerLimit;
    printf("enter the lower limit: ");
    scanf("%d", &lowerLimit);

    if (outOfBounds(lowerLimit))
    {
        printLimitError();
        return EXIT_FAILURE;
    }

    int firstPrime = -1;
    for (int number = lowerLimit; number < MAX; number++)
    {
        if (isPrime(number))
        {
            firstPrime = number;
            break;
        }
    }

    if (firstPrime == -1)
    {
        printf("No prime number found above %d.\n", lowerLimit);
    }
    else
    {
        printf("The first prime number above %d is %d.\n", lowerLimit, firstPrime);
    }

    return EXIT_SUCCESS;
}
