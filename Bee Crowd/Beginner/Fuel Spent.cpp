/*
Site Name : Bee Crowd

Problem ID: 1017

Problem Name:
Little John wants to calculate and show the amount of spent fuel liters on a trip, using a car that does 12 Km/L. For this, he would like you to help him through a simple program. To perform the calculation, you have to read spent time (in hours) and the same average speed (km/h). In this way, you can get distance and then, calculate how many liters would be needed. Show the value with three decimal places after the point.

Subject : Sequential

Timelimit: 1

Input:
The input file contains two integers. The first one is the spent time in the trip (in hours). The second one is the average speed during the trip (in Km/h).

Output:
Print how many liters would be needed to do this trip, with three digits after the decimal point.

Example (Input & Output):
Input: 10, 85
Output: 70.833

Input : 22, 67
Output : 122.833
*/

#include <iostream>
#include <iomanip>

int main()
{
    int time;         // Time spent in hours
    int averageSpeed; // Average speed in km/h

    // Read the input values for time and average speed
    std::cin >> time >> averageSpeed;

    // Calculate the distance traveled
    int distance = time * averageSpeed;

    // Calculate the amount of fuel spent
    // The car does 12 Km/L
    double fuelSpent = static_cast<double>(distance) / 12.0;

    // Print the result with three decimal places
    std::cout << std::fixed << std::setprecision(3) << fuelSpent << std::endl;

    return 0;
}