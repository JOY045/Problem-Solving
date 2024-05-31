/*
Site Name : Bee Crowd

Problem ID: 1038

Problem Name:
Using the following table, write a program that reads a code and the amount of an item. After, print the value to pay. This is a very simple program with the only intention of practice of selection commands.

https://resources.beecrowd.com/gallery/images/problems/UOJ_1038_en.png

Subject : Selection

Timelimit: 1

Input:
The input file contains two integer numbers X and Y. X is the product code and Y is the quantity of this item according to the above table.

Output:
The output must be a message "Total: R$ " followed by the total value to be paid, with 2 digits after the decimal point.

Example (Input & Output):
Input: 3, 2
Output: Total: R$ 10.00

Input: 2, 3
Output: Total: R$ 13.50
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int code, quantity;
    double total = 0.0;

    // Read the product code and quantity
    cin >> code >> quantity;

    // Define prices for each product code
    switch (code)
    {
    case 1:
        total = 4.00 * quantity;
        break;
    case 2:
        total = 4.50 * quantity;
        break;
    case 3:
        total = 5.00 * quantity;
        break;
    case 4:
        total = 2.00 * quantity;
        break;
    case 5:
        total = 1.50 * quantity;
        break;
    default:
        cout << "Invalid product code" << endl;
        return 1;
    }

    // Print the total amount to be paid with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Total: R$ " << total << endl;

    return 0;
}