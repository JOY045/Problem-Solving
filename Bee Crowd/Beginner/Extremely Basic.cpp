// Site Name : Bee Crowd

// Problem ID: 1001

// Problem Name:
// Read 2 variables, named A and B and make the sum of these two variables, assigning its result to the variable X. Print X as shown below. Print endline after the result otherwise you will get “Presentation Error”.

// Subject : Sequential

// Timelimit: 1

// Input:
// The input file will contain 2 integer numbers.

// Output:
// Print the letter X (uppercase) with a blank space before and after the equal signal followed by the value of X, according to the following example. Don't forget the endline after all.

// Example (Input & Output):
// Input: 10, 9
// Output: X = 19

// Input : 15, -7
// Output : X = 8

#include <iostream>

int main()
{
    int A, B, X;

    // Read values for A and B
    std::cin >> A >> B;

    // Calculate the sum and assign it to X
    X = A + B;

    // Print the result with an endline
    std::cout << "X = " << X << std::endl;

    return 0;
}