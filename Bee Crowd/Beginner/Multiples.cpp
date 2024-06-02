/*
Site Name : Bee Crowd

Problem ID: 1044

Problem Name:
Read two integer values (A and B). After, the program should print the message "Sao Multiplos" (are multiples) or "Nao sao Multiplos" (aren’t multiples), corresponding to the read values.

Subject : Selection

Timelimit: 1

Input:
The input has two integer numbers.

Output:
Print the relative message to the input as stated above.

Example (Input & Output):
Input: 6, 24
Output: Sao Multiplos

Input : 6, 25
Output : Nao sao Multiplos
*/

#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    // Check if A is a multiple of B or B is a multiple of A
    if (A % B == 0 || B % A == 0)
    {
        cout << "Sao Multiplos" << endl;
    }
    else
    {
        cout << "Nao sao Multiplos" << endl;
    }

    return 0;
}