/*
Site Name : Bee Crowd

Problem ID: 1037

Problem Name:
You must make a program that read a float-point number and print a message saying in which of following intervals the number belongs: [0,25] (25,50], (50,75], (75,100]. If the read number is less than zero or greather than 100, the program must print the message “Fora de intervalo” that means "Out of Interval".

The symbol '(' represents greather than. For example:
[0,25] indicates numbers between 0 and 25.0000, including both.
(25,50] indicates numbers greather than 25 (25.00001) up to 50.0000000.

Subject : Selection

Timelimit: 1

Input:
The input file contains a floating-point number.

Output:
The output must be a message like following example.

Example (Input & Output):
Input: 25.01
Output: Intervalo (25,50]

Input: -25.02
Output: Fora de intervalo
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float number;

    // Read input value
    cin >> number;

    // Determine the interval
    if (number >= 0 && number <= 25)
    {
        cout << "Intervalo [0,25]" << endl;
    }
    else if (number > 25 && number <= 50)
    {
        cout << "Intervalo (25,50]" << endl;
    }
    else if (number > 50 && number <= 75)
    {
        cout << "Intervalo (50,75]" << endl;
    }
    else if (number > 75 && number <= 100)
    {
        cout << "Intervalo (75,100]" << endl;
    }
    else
    {
        cout << "Fora de intervalo" << endl;
    }

    return 0;
}