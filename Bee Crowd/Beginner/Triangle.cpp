/*
Site Name : Bee Crowd

Problem ID: 1043

Problem Name:
Read three point floating values (A, B and C) and verify if is possible to make a triangle with them. If it is possible, calculate the perimeter of the triangle and print the message:

Perimetro = XX.X

If it is not possible, calculate the area of the trapezium which basis A and B and C as height, and print the message:

Area = XX.X

Subject : Selection

Timelimit: 1

Input:
The input file has tree floating point numbers.

Output:
Print the result with one digit after the decimal point.

Example (Input & Output):
Input: 6.0, 4.0, 2.0
Output: Area = 10.0

Input : 6.0, 4.0, 2.1
Output : Perimetro = 12.1
*/

#include <iostream>
#include <iomanip> // For setting precision
using namespace std;

int main()
{
    double A, B, C;
    cin >> A >> B >> C;

    // Check if the values can form a triangle
    if (A + B > C && A + C > B && B + C > A)
    {
        // Calculate the perimeter
        double perimeter = A + B + C;
        cout << fixed << setprecision(1) << "Perimetro = " << perimeter << endl;
    }
    else
    {
        // Calculate the area of the trapezium
        double area = ((A + B) * C) / 2;
        cout << fixed << setprecision(1) << "Area = " << area << endl;
    }

    return 0;
}