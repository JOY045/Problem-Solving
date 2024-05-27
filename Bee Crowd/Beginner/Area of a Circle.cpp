// Site Name : Bee Crowd

// Problem ID: 1002

// Problem Name:
// The formula to calculate the area of a circumference is defined as A = π . R2. Considering to this problem that π = 3.14159. Calculate the area using the formula given in the problem description.

// Subject : Sequential

// Timelimit: 1

// Input:
// The input contains a value of floating point (double precision), that is the variable R.

// Output:
// Present the message "A=" followed by the value of the variable, as in the example bellow, with four places after the decimal point. Use all double precision variables. Like all the problems, don't forget to print the end of line after the result, otherwise you will receive "Presentation Error".

// Example (Input & Output):
// Input: 100.64
// Output: A = 31819.3103

// Input : 150.00
// Output : A=70685.7750

#include <iostream>
#include <iomanip> // For setting precision

int main()
{
    const double PI = 3.14159;
    double radius, area;

    // Read the value of the radius
    std::cin >> radius;

    // Calculate the area using the formula A = π * R^2
    area = PI * radius * radius;

    // Print the area with 4 decimal places
    std::cout << std::fixed << std::setprecision(4);
    std::cout << "A=" << area << std::endl;

    return 0;
}
