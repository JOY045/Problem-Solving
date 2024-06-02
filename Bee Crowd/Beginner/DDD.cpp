/*
Site Name : Bee Crowd

Problem ID: 1050

Problem Name:
Read an integer number that is the code number for phone dialing. Then, print the destination according to the following table:

https://resources.beecrowd.com/gallery/images/problems/UOJ_1050.png

If the input number isn’t found in the above table, the output must be:
DDD nao cadastrado
That means “DDD not found” in Portuguese language.

Subject : Selection

Timelimit: 1

Input:
The input consists in a unique integer number.

Output:
Print the city name corresponding to the input DDD. Print DDD nao cadastrado if doesn't exist corresponding DDD to the typed number.

Example (Input & Output):
Input: 11
Output: Sao Paulo
*/

#include <iostream>
using namespace std;

int main()
{
    int ddd;
    cin >> ddd;

    switch (ddd)
    {
    case 61:
        cout << "Brasilia" << endl;
        break;
    case 71:
        cout << "Salvador" << endl;
        break;
    case 11:
        cout << "Sao Paulo" << endl;
        break;
    case 21:
        cout << "Rio de Janeiro" << endl;
        break;
    case 32:
        cout << "Juiz de Fora" << endl;
        break;
    case 19:
        cout << "Campinas" << endl;
        break;
    case 27:
        cout << "Vitoria" << endl;
        break;
    case 31:
        cout << "Belo Horizonte" << endl;
        break;
    default:
        cout << "DDD nao cadastrado" << endl;
        break;
    }

    return 0;
}