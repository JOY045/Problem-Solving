/*
Site Name : Bee Crowd

Problem ID: 1015

Problem Name:
Read the four values corresponding to the x and y axes of two points in the plane, p1 (x1, y1) and p2 (x2, y2) and calculate the distance between them, showing four decimal places after the comma, according to the formula:

Distance = √(x2 - x1)2 + (y2 - y1)2

Subject : Sequential

Timelimit: 1

Input:
The input file contains two lines of data. The first one contains two double values: x1 y1 and the second one also contains two double values with one digit after the decimal point: x2 y2.

Output:
Calculate and print the distance value using the provided formula, with 4 digits after the decimal point.

Example (Input & Output):
Input:
1.0, 7.0
5.0, 9.0
Output: 4.4721

Input :
2.5, -0.4
-12.2, 7.0
Output : 16.4575
*/

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    // Declare variables for the coordinates
    double x1, y1, x2, y2;

    // Input the coordinates of the two points
    std::cin >> x1 >> y1 >> x2 >> y2;

    // Calculate the distance using the distance formula
    double distance = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));

    // Set the output format for the distance to 4 decimal places
    std::cout << std::fixed << std::setprecision(4);

    // Output the result in the required format
    std::cout << distance << std::endl;

    return 0;
}