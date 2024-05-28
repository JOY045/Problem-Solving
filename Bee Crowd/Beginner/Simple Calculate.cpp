// Site Name : Bee Crowd

// Problem ID: 1010

// Problem Name:
// In this problem, the task is to read a code of a product 1, the number of units of product 1, the price for one unit of product 1, the code of a product 2, the number of units of product 2 and the price for one unit of product 2. After this, calculate and show the amount to be paid.

// Subject : Sequential

// Timelimit: 1

// Input:
// The input file contains two lines of data. In each line there will be 3 values: two integers and a floating value with 2 digits after the decimal point.

// Output:
// The output file must be a message like the following example where "Valor a pagar" means Value to Pay. Remember the space after ":" and after "R$" symbol. The value must be presented with 2 digits after the point.

// Example (Input & Output):
// Input:
// 12, 1, 5.30
// 16, 2, 5.10
// Output: VALOR A PAGAR: R$ 15.50

// Input :
// 13, 2, 15.30
// 161, 4, 5.20
// Output : VALOR A PAGAR: R$ 51.40

#include <iostream>
#include <iomanip>

int main()
{
    // Declare variables for the first product
    int code1, units1;
    double price1;

    // Declare variables for the second product
    int code2, units2;
    double price2;

    // Input details for the first product
    std::cin >> code1 >> units1 >> price1;

    // Input details for the second product
    std::cin >> code2 >> units2 >> price2;

    // Calculate the total amount to be paid
    double totalAmount = (units1 * price1) + (units2 * price2);

    // Set the output format for the total amount to 2 decimal places
    std::cout << std::fixed << std::setprecision(2);

    // Output the result in the required format
    std::cout << "VALOR A PAGAR: R$ " << totalAmount << std::endl;

    return 0;
}