/*
Site Name : Bee Crowd

Problem ID: 1013

Problem Name:
Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior". Use the following formula:

MaiorAB = (a + b + abs (a + b)) / 2

Subject : Sequential

Timelimit: 1

Input:
The input file contains 3 integer values.

Output:
Print the greatest of these three values followed by a space and the message “eh o maior”.

Example (Input & Output):
Input: 7, 14, 106
Output: 106 eh o maior

Input : 217, 14, 6
Output : 217 eh o maior
*/

#include <iostream>
#include <cmath>

int main()
{
    // Declare variables for the input values
    int A, B, C;

    // Input the values of A, B, and C
    std::cin >> A >> B >> C;

    // Calculate the greatest value between A and B
    int MaiorAB = (A + B + std::abs(A - B)) / 2;

    // Calculate the greatest value between MaiorAB and C
    int Maior = (MaiorAB + C + std::abs(MaiorAB - C)) / 2;

    // Output the greatest value followed by the message
    std::cout << Maior << " eh o maior" << std::endl;

    return 0;
}