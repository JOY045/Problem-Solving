/*
Site Name : Bee Crowd

Problem ID: 1048

Problem Name:
The company ABC decided to give a salary increase to its employees, according to the following table:

Salary
0 - 400.00
400.01 - 800.00
800.01 - 1200.00
1200.01 - 2000.00
Above 2000.00

Readjustment Rate
15%
12%
10%
7%
4%

Read the employee's salary, calculate and print the new employee's salary, as well the money earned and the increase percentual obtained by the employee, with corresponding messages in Portuguese, as the below example.

Subject : Selection

Timelimit: 1

Input:
The input contains only a floating-point number, with 2 digits after the decimal point.

Output:
Print 3 messages followed by the corresponding numbers (see example) informing the new salary, the among of money earned (both must be shown with 2 decimal places) and the percentual obtained by the employee. Note:
Novo salario:  means "New Salary"
Reajuste ganho: means "Money earned"
Em percentual: means "In percentage"

Example (Input & Output):
Input: 800.01
Output:
Novo salario: 880.01
Reajuste ganho: 80.00
Em percentual: 10 %

Input: 2000.00
Output :
Novo salario: 2140.00
Reajuste ganho: 140.00
Em percentual: 7 %
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double salary, newSalary, moneyEarned;
    int percentage;

    // Read the current salary
    cin >> salary;

    // Determine the readjustment rate and calculate the new salary
    if (salary >= 0 && salary <= 400.00)
    {
        percentage = 15;
    }
    else if (salary <= 800.00)
    {
        percentage = 12;
    }
    else if (salary <= 1200.00)
    {
        percentage = 10;
    }
    else if (salary <= 2000.00)
    {
        percentage = 7;
    }
    else
    {
        percentage = 4;
    }

    // Calculate the money earned and the new salary
    moneyEarned = salary * percentage / 100;
    newSalary = salary + moneyEarned;

    // Print the results with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Novo salario: " << newSalary << endl;
    cout << "Reajuste ganho: " << moneyEarned << endl;
    cout << "Em percentual: " << percentage << " %" << endl;

    return 0;
}