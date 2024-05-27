// Site Name : Bee Crowd

// Problem ID: 1006

// Problem Name:
// Read three values (variables A, B and C), which are the three student's grades. Then, calculate the average, considering that grade A has weight 2, grade B has weight 3 and the grade C has weight 5. Consider that each grade can go from 0 to 10.0, always with one decimal place.

// Subject : Sequential

// Timelimit: 1

// Input:
// The input file contains 3 values of floating points (double) with one digit after the decimal point.

// Output:
// Print the message "MEDIA"(average in Portuguese) and the student's average according to the following example, with a blank space before and after the equal signal.

// Example (Input & Output):
// Input: 5.0, 6.0, 7.0
// Output: MEDIA = 6.3

// Input : 5.0, 10.0, 10.0
// Output : MEDIA = 9.0

#include <iostream>
#include <iomanip>

int main()
{
    double A, B, C, average;

    // Read values for A, B, and C
    std::cin >> A >> B >> C;

    // Calculate the weighted average
    average = (A * 2.0 + B * 3.0 + C * 5.0) / 10.0;

    // Print the result with one digit after the decimal point
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "MEDIA = " << average << std::endl;

    return 0;
}