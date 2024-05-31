/*
Site Name : Bee Crowd

Problem ID: 1035

Problem Name:
Read 4 integer values A, B, C and D. Then if B is greater than C and D is greater than A and if the sum of C and D is greater than the sum of A and B and if C and D were positives values and if A is even, write the message “Valores aceitos” (Accepted values). Otherwise, write the message “Valores nao aceitos” (Values not accepted).

Subject : Selection

Timelimit: 1

Input:
Four integer numbers A, B, C and D.

Output:
Show the corresponding message after the validation of the values​​.

Example (Input & Output):
Input: 5, 6, 7, 8
Output: Valores nao aceitos

Input: 2, 3, 2, 6
Output: Valores aceitos
*/

#include <iostream>
using namespace std;

int main()
{
    int A, B, C, D;

    // Read input values
    cin >> A >> B >> C >> D;

    // Check the conditions
    if (B > C && D > A && (C + D) > (A + B) && C > 0 && D > 0 && A % 2 == 0)
    {
        cout << "Valores aceitos" << endl;
    }
    else
    {
        cout << "Valores nao aceitos" << endl;
    }

    return 0;
}