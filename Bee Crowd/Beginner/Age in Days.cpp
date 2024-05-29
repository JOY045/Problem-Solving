/*
Site Name : Bee Crowd

Problem ID: 1020

Problem Name:
Read an integer value corresponding to a person's age (in days) and print it in years, months and days, followed by its respective message “ano(s)”, “mes(es)”, “dia(s)”.
Note: only to facilitate the calculation, consider the whole year with 365 days and 30 days every month. In the cases of test there will never be a situation that allows 12 months and some days, like 360, 363 or 364. This is just an exercise for the purpose of testing simple mathematical reasoning.

Subject : Sequential

Timelimit: 1

Input:
The input file contains 1 integer value.

Output:
Print the output, like the following example.

Example (Input & Output):
Input: 400
Output:
1 ano(s)
1 mes(es)
5 dia(s)

Input : 800
Output :
2 ano(s)
2 mes(es)
10 dia(s)
*/

#include <iostream>

int main()
{
    // Declare the variable for the input value (age in days)
    int totalDays;

    // Input the total age in days
    std::cin >> totalDays;

    // Calculate the number of years, months, and days
    int years = totalDays / 365;
    totalDays %= 365;

    int months = totalDays / 30;
    int days = totalDays % 30;

    // Output the result in the required format
    std::cout << years << " ano(s)" << std::endl;
    std::cout << months << " mes(es)" << std::endl;
    std::cout << days << " dia(s)" << std::endl;

    return 0;
}