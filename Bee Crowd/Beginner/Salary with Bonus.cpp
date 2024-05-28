// Site Name : Bee Crowd

// Problem ID: 1009

// Problem Name:
// Make a program that reads a seller's name, his/her fixed salary and the sale's total made by himself/herself in the month (in money). Considering that this seller receives 15% over all products sold, write the final salary (total) of this seller at the end of the month , with two decimal places. *** Don’t forget to print the line 's end after the result, otherwise you will receive “Presentation Error”. *** Don’t forget the blank spaces.

// Subject : Sequential

// Timelimit: 1

// Input:
// The input file contains a text (employee's first name), and two double precision values, that are the seller's salary and the total value sold by him/her.

// Output:
// Print the seller's total salary, according to the given example.

// Example (Input & Output):
// Input: JOAO, 500.00, 1230.30
// Output: TOTAL = R$ 684.54

// Input : MANGOJATA, 1700.00, 1230.50
// Output : TOTAL = R$ 1884.58

#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    // Declare variables
    std::string sellerName;
    double fixedSalary, totalSales, finalSalary;

    // Input seller's name, fixed salary, and total sales
    std::cin >> sellerName >> fixedSalary >> totalSales;

    // Calculate the final salary with a 15% commission on sales
    finalSalary = fixedSalary + (totalSales * 0.15);

    // Set the output format for the final salary to 2 decimal places
    std::cout << std::fixed << std::setprecision(2);

    // Output the result in the required format
    std::cout << "TOTAL = R$ " << finalSalary << std::endl;

    return 0;
}