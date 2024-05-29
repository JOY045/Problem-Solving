/*
Site Name : Bee Crowd

Problem ID: 1019

Problem Name:
Read an integer value, which is the duration in seconds of a certain event in a factory, and inform it expressed in hours:minutes:seconds.

Subject : Sequential

Timelimit: 1

Input:
The input file contains an integer N.

Output:
Print the read time in the input file (seconds) converted in hours:minutes:seconds like the following example.

Example (Input & Output):
Input: 556
Output: 0:9:16

Input : 140153
Output : 38:55:53
*/

#include <iostream>

int main()
{
    // Declare the variable for the input value (duration in seconds)
    int totalSeconds;

    // Input the total duration in seconds
    std::cin >> totalSeconds;

    // Calculate the number of hours, minutes, and seconds
    int hours = totalSeconds / 3600;
    totalSeconds %= 3600;

    int minutes = totalSeconds / 60;
    int seconds = totalSeconds % 60;

    // Output the result in the required format
    std::cout << hours << ":" << minutes << ":" << seconds << std::endl;

    return 0;
}