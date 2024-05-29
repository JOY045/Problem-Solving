/*
Site Name : Bee Crowd

Problem ID: 1016

Problem Name:
Two cars (X and Y) leave in the same direction. The car X leaves with a constant speed of 60 km/h and the car Y leaves with a constant speed of 90 km / h. In one hour (60 minutes) the car Y can get a distance of 30 kilometers from the X car, in other words, it can get away one kilometer for each 2 minutes. Read the distance (in km) and calculate how long it takes (in minutes) for the car Y to take this distance in relation to the other car.

Subject : Sequential

Timelimit: 1

Input:
The input file contains 1 integer value.

Output:
Print the necessary time followed by the message "minutos" that means minutes in Portuguese.

Example (Input & Output):
Input: 30
Output: 60 minutos

Input : 110
Output : 220 minutos
*/

#include <iostream>

int main()
{
    // Declare variable for the distance
    int distance;

    // Input the distance
    std::cin >> distance;

    // Calculate the time in minutes
    int time = distance * 2;

    // Output the result in the required format
    std::cout << time << " minutos" << std::endl;

    return 0;
}