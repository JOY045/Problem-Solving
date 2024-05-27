// Site Name : Bee Crowd

// Problem ID: 1003

// Problem Name:
// Read two integer values, in this case, the variables A and B. After this, calculate the sum between them and assign it to the variable SOMA. Write the value of this variable.

// Subject : Sequential

// Timelimit: 1

// Input:
// The input file contains 2 integer numbers.

// Output:
// Print the message "SOMA" with all the capital letters, with a blank space before and after the equal signal followed by the corresponding value to the sum of A and B. Like all the problems, don't forget to print the end of line, otherwise you will receive "Presentation Error".

// Example (Input & Output):
// Input: -30, 10
// Output: SOMA = -20

// Input : 30, 10
// Output : SOMA = 40

#include <iostream>

int main()
{
    int A, B, SOMA;

    // Read values for A and B
    std::cin >> A >> B;

    // Calculate the sum and assign it to SOMA
    SOMA = A + B;

    // Print the value of SOMA
    std::cout << "SOMA = " << SOMA << std::endl;

    return 0;
}