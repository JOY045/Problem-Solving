// Site Name : Bee Crowd

// Problem ID: 1008

// Problem Name:
// Write a program that reads an employee's number, his/her worked hours number in a month and the amount he received per hour. Print the employee's number and salary that he/she will receive at end of the month, with two decimal places. *** Don’t forget to print the line 's end after the result, otherwise you will receive “Presentation Error”. *** Don’t forget the space before and after the equal signal and after the U$.

// Subject : Sequential

// Timelimit: 1

// Input:
// The input file contains 2 integer numbers and 1 value of floating point, representing the number, worked hours amount and the amount the employee receives per worked hour.

// Output:
// Print the number and the employee's salary, according to the given example, with a blank space before and after the equal signal.

// Example (Input & Output):
// Input: 25, 100, 5.50
// Output:
// NUMBER = 25
// SALARY = U$ 550.00

// Input : 6, 145, 15.55
// Output :
// NUMBER = 6
// SALARY = U$ 2254.75

#include <iostream>
#include <iomanip>

int main()
{
    // Declare variables
    int employeeNumber, workedHours;
    double hourlyRate;

    // Input employee's number, worked hours and hourly rate
    std::cin >> employeeNumber >> workedHours >> hourlyRate;

    // Calculate the salary
    double salary = workedHours * hourlyRate;

    // Set the output format for the salary to 2 decimal places
    std::cout << std::fixed << std::setprecision(2);

    // Output the result in the required format
    std::cout << "NUMBER = " << employeeNumber << std::endl;
    std::cout << "SALARY = U$ " << salary << std::endl;

    return 0;
}