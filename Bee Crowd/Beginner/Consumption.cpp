/*
Site Name : Bee Crowd

Problem ID: 1014

Problem Name:
Calculate a car's average consumption being provided the total distance traveled (in Km) and the spent fuel total (in liters).

Subject : Sequential

Timelimit: 1

Input:
The input file contains two values: one integer value X representing the total distance (in Km) and the second one is a floating point number Y  representing the spent fuel total, with a digit after the decimal point.

Output:
Present a value that represents the average consumption of a car with 3 digits after the decimal point, followed by the message "km/l".

Example (Input & Output):
Input: 500, 35.0
Output: 14.286 km/l

Input : 4554, 464.6
Output : 9.802 km/l
*/

#include <iostream>
#include <iomanip>

int main()
{
    // Declare variables for the input values
    int distance;
    double fuel;

    // Input the distance and fuel values
    std::cin >> distance >> fuel;

    // Calculate the average consumption
    double averageConsumption = distance / fuel;

    // Set the output format for the average consumption to 3 decimal places
    std::cout << std::fixed << std::setprecision(3);

    // Output the result in the required format
    std::cout << averageConsumption << " km/l" << std::endl;

    return 0;
}