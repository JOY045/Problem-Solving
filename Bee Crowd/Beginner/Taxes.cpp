/*
Site Name : Bee Crowd

Problem ID: 1051

Problem Name:
In an imaginary country called Lisarb, all the people are very happy to pay their taxes because they know that doesn’t exist corrupt politicians and the taxes are used to benefit the population, without any misappropriation. The currency of this country is Rombus, whose symbol is R$.

Read a value with 2 digits after the decimal point, equivalent to the salary of a Lisarb inhabitant. Then print the due value that this person must pay of taxes, according to the table below.

https://resources.beecrowd.com/gallery/images/problems/UOJ_1051_en.png

Remember, if the salary is R$ 3,002.00 for example, the rate of 8% is only over R$ 1,000.00, because the salary from R$ 0.00 to R$ 2,000.00 is tax free. In the follow example, the total rate is 8% over R$ 1000.00 + 18% over R$ 2.00, resulting in R$ 80.36 at all. The answer must be printed with 2 digits after the decimal point.

Subject : Selection

Timelimit: 1

Input:
The input contains only a float-point number, with 2 digits after the decimal point.

Output:
Print the message "R$" followed by a blank space and the total tax to be payed, with two digits after the decimal point. If the value is up to 2000, print the message "Isento".

Example (Input & Output):
Input: 4520.00
Output: R$ 355.60

Input: 1701.12
Output: Isento
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double salary, tax = 0.0;
    cin >> salary;

    if (salary <= 2000.00)
    {
        cout << "Isento" << endl;
    }
    else
    {
        if (salary > 4500.00)
        {
            tax += (salary - 4500.00) * 0.28;
            salary = 4500.00;
        }
        if (salary > 3000.00)
        {
            tax += (salary - 3000.00) * 0.18;
            salary = 3000.00;
        }
        if (salary > 2000.00)
        {
            tax += (salary - 2000.00) * 0.08;
        }

        cout << fixed << setprecision(2) << "R$ " << tax << endl;
    }

    return 0;
}