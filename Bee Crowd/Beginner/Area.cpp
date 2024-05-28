/*
Site Name : Bee Crowd

Problem ID: 1012

Problem Name:
Make a program that reads three floating point values: A, B and C. Then, calculate and show:
a) the area of the rectangled triangle that has base A and height C.
b) the area of the radius's circle C. (pi = 3.14159)
c) the area of the trapezium which has A and B by base, and C by height.
d) the area of ​​the square that has side B.
e) the area of the rectangle that has sides A and B.

Subject : Sequential

Timelimit: 1

Input:
The input file contains three double values with one digit after the decimal point.

Output:
The output file must contain 5 lines of data. Each line corresponds to one of the areas described above, always with a corresponding message (in Portuguese) and one space between the two points and the value. The value calculated must be presented with 3 digits after the decimal point.

Example (Input & Output):
Input: 3.0, 4.0, 5.2
Output:
TRIANGULO: 7.800
CIRCULO: 84.949
TRAPEZIO: 18.200
QUADRADO: 16.000
RETANGULO: 12.000

Input : 12.7, 10.4, 15.2
Output :
TRIANGULO: 96.520
CIRCULO: 725.833
TRAPEZIO: 175.560
QUADRADO: 108.160
RETANGULO: 132.080
*/

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    // Declare variables for the input values
    double A, B, C;

    // Input the values of A, B, and C
    std::cin >> A >> B >> C;

    // Define the value of pi
    const double pi = 3.14159;

    // Calculate the areas
    double area_triangle = 0.5 * A * C;        // Area of the rectangle triangle
    double area_circle = pi * std::pow(C, 2);  // Area of the circle
    double area_trapezium = 0.5 * (A + B) * C; // Area of the trapezium
    double area_square = std::pow(B, 2);       // Area of the square
    double area_rectangle = A * B;             // Area of the rectangle

    // Set the output format for the areas to 3 decimal places
    std::cout << std::fixed << std::setprecision(3);

    // Output the results in the required format
    std::cout << "TRIANGULO: " << area_triangle << std::endl;
    std::cout << "CIRCULO: " << area_circle << std::endl;
    std::cout << "TRAPEZIO: " << area_trapezium << std::endl;
    std::cout << "QUADRADO: " << area_square << std::endl;
    std::cout << "RETANGULO: " << area_rectangle << std::endl;

    return 0;
}