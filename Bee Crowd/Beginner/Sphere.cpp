// Site Name : Bee Crowd

// Problem ID: 1011

// Problem Name:
// Make a program that calculates and shows the volume of a sphere being provided the value of its radius (R) . The formula to calculate the volume is: (4/3) * pi * R3. Consider (assign) for pi the value 3.14159.
// Tip : Use(4 / 3.0) or (4.0 / 3) in your formula, because some languages(including C++) assume that the division's result between two integers is another integer.

// Subject : Sequential

// Timelimit: 1

// Input:
// The input contains a value of floating point (double precision).

// Output:
// The output must be a message "VOLUME" like the following example with a space before and after the equal signal. The value must be presented with 3 digits after the decimal point.

// Example (Input & Output):
// Input: 1523
// Output: VOLUME = 14797486501.627

// Input : 15
// Output : VOLUME = 14137.155

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    // Declare variable for the radius
    double radius;

    // Input the radius
    std::cin >> radius;

    // Define the value of pi
    const double pi = 3.14159;

    // Calculate the volume of the sphere using the formula
    double volume = (4.0 / 3.0) * pi * std::pow(radius, 3);

    // Set the output format for the volume to 3 decimal places
    std::cout << std::fixed << std::setprecision(3);

    // Output the result in the required format
    std::cout << "VOLUME = " << volume << std::endl;

    return 0;
}