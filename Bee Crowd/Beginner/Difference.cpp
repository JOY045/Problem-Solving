// Site Name : Bee Crowd

// Problem ID: 1007

// Problem Name:
// Read four integer values named A, B, C and D. Calculate and print the difference of product A and B by the product of C and D (A * B - C * D).

// Subject : Sequential

// Timelimit: 1

// Input:
// The input file contains 4 integer values.

// Output:
// Print DIFERENCA (DIFFERENCE in Portuguese) with all the capital letters, according to the following example, with a blank space before and after the equal signal.

// Example (Input & Output):
// Input: 5, 6, 7, 8
// Output: DIFERENCA = -26

// Input : 5, 6, -7, 8
// Output : DIFERENCA = 86

#include <iostream>

int main()
{
    // Declare variables
    int A, B, C, D;

    // Input four integer values
    std::cin >> A >> B >> C >> D;

    // Calculate the difference
    int difference = (A * B) - (C * D);

    // Output the result in the required format
    std::cout << "DIFERENCA = " << difference << std::endl;

    return 0;
}