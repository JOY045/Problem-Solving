/*
Site Name : Bee Crowd

Problem ID: 1045

Problem Name:
Read 3 double numbers (A, B and C) representing the sides of a triangle and arrange them in decreasing order, so that the side A is the biggest of the three sides. Next, determine the type of triangle that they can make, based on the following cases always writing an appropriate message:

if A ≥ B + C, write the message: NAO FORMA TRIANGULO
if A2 = B2 + C2, write the message: TRIANGULO RETANGULO
if A2 > B2 + C2, write the message: TRIANGULO OBTUSANGULO
if A2 < B2 + C2, write the message: TRIANGULO ACUTANGULO
if the three sides are the same size, write the message: TRIANGULO EQUILATERO
if only two sides are the same and the third one is different, write the message: TRIANGULO ISOSCELES

Subject : Selection

Timelimit: 1

Input:
The input contains three double numbers, A (0 < A) , B (0 < B) and C (0 < C).

Output:
Print all the classifications of the triangle presented in the input.

Example (Input & Output):
Input: 7.0, 5.0, 7.0
Output:
TRIANGULO ACUTANGULO
TRIANGULO ISOSCELES

Input : 6.0, 6.0, 10.0
Output :
TRIANGULO OBTUSANGULO
TRIANGULO ISOSCELES

Input : 6.0, 6.0, 6.0
Output :
TRIANGULO ACUTANGULO
TRIANGULO EQUILATERO

Input : 5.0, 7.0, 2.0
Output : NAO FORMA TRIANGULO

Input : 6.0, 8.0, 10.0
Output : TRIANGULO RETANGULO
*/

#include <iostream>
#include <algorithm> // For std::sort
#include <cmath>     // For std::pow

using namespace std;

int main()
{
    double A, B, C;
    cin >> A >> B >> C;

    // Store the sides in an array
    double sides[3] = {A, B, C};
    // Sort the sides in decreasing order
    sort(sides, sides + 3, greater<double>());

    // Reassign the sorted values to A, B, and C
    A = sides[0];
    B = sides[1];
    C = sides[2];

    // Check the type of triangle
    if (A >= B + C)
    {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else
    {
        if (pow(A, 2) == pow(B, 2) + pow(C, 2))
        {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if (pow(A, 2) > pow(B, 2) + pow(C, 2))
        {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if (pow(A, 2) < pow(B, 2) + pow(C, 2))
        {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (A == B && B == C)
        {
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        if ((A == B && A != C) || (A == C && A != B) || (B == C && B != A))
        {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

    return 0;
}