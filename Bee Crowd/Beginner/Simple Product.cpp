// Site Name : Bee Crowd

// Problem ID: 1004

// Problem Name:
// Read two integer values. After this, calculate the product between them and store the result in a variable named PROD. Print the result like the example below. Do not forget to print the end of line after the result, otherwise you will receive “Presentation Error”.

// Subject : Sequential

// Timelimit: 1

// Input:
// The input file contains 2 integer numbers.

// Output:
// Print the message "PROD" and PROD according to the following example, with a blank space before and after the equal signal.

// Example (Input & Output):
// Input: 3, 9
// Output: PROD = 27

// Input : -30, 10
// Output : PROD = -300

#include <iostream>

int main()
{
    int A, B, PROD;

    // Read values for A and B
    std::cin >> A >> B;

    // Calculate the product and assign it to PROD
    PROD = A * B;

    // Print the value of PROD
    std::cout << "PROD = " << PROD << std::endl;

    return 0;
}