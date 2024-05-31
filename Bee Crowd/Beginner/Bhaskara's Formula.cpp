/*
Site Name : Bee Crowd

Problem ID: 1036

Problem Name:
Read 3 floating-point numbers. After, print the roots of bhaskara’s formula. If it's impossible to calculate the roots because a division by zero or a square root of a negative number, presents the message “Impossivel calcular”.

Subject : Selection

Timelimit: 1

Input:
Read 3 floating-point numbers (double) A, B and C.

Output:
Print the result with 5 digits after the decimal point or the message if it is impossible to calculate.

Example (Input & Output):
Input: 10.0, 20.1, 5.1
Output:
R1 = -0.29788
R2 = -1.71212

Input: 10.0, 3.0, 5.0
Output: Impossivel calcular
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double A, B, C;

    // Read input values
    cin >> A >> B >> C;

    // Calculate the discriminant
    double delta = B * B - 4 * A * C;

    // Check if it is possible to calculate the roots
    if (A == 0 || delta < 0)
    {
        cout << "Impossivel calcular" << endl;
    }
    else
    {
        // Calculate the roots
        double R1 = (-B + sqrt(delta)) / (2 * A);
        double R2 = (-B - sqrt(delta)) / (2 * A);

        // Print the results with 5 digits after the decimal point
        cout << fixed << setprecision(5);
        cout << "R1 = " << R1 << endl;
        cout << "R2 = " << R2 << endl;
    }

    return 0;
}