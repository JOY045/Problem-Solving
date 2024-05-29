/*
Site Name : Bee Crowd

Problem ID: 1021

Problem Name:
Read a value of floating point with two decimal places. This represents a monetary value. After this, calculate the smallest possible number of notes and coins on which the value can be decomposed. The considered notes are of 100, 50, 20, 10, 5, 2. The possible coins are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01. Print the message “NOTAS:” followed by the list of notes and the message “MOEDAS:” followed by the list of coins.

Subject : Sequential

Timelimit: 1

Input:
The input file contains a value of floating point N (0 ≤ N ≤ 1000000.00).

Output:
Print the minimum quantity of banknotes and coins necessary to change the initial value, as the given example.

Example (Input & Output):
Input: 576.73
Output:
NOTAS:
5 nota(s) de R$ 100.00
1 nota(s) de R$ 50.00
1 nota(s) de R$ 20.00
0 nota(s) de R$ 10.00
1 nota(s) de R$ 5.00
0 nota(s) de R$ 2.00
MOEDAS:
1 moeda(s) de R$ 1.00
1 moeda(s) de R$ 0.50
0 moeda(s) de R$ 0.25
2 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
3 moeda(s) de R$ 0.01

Input : 91.01
Output :
NOTAS:
0 nota(s) de R$ 100.00
1 nota(s) de R$ 50.00
2 nota(s) de R$ 20.00
0 nota(s) de R$ 10.00
0 nota(s) de R$ 5.00
0 nota(s) de R$ 2.00
MOEDAS:
1 moeda(s) de R$ 1.00
0 moeda(s) de R$ 0.50
0 moeda(s) de R$ 0.25
0 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
1 moeda(s) de R$ 0.01
*/

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    // Declare the variable for the input value (monetary value)
    double amount;

    // Input the monetary value
    std::cin >> amount;

    // Convert the amount to an integer value representing the total cents to avoid floating-point precision issues
    int totalCents = std::round(amount * 100);

    // Calculate the number of each note
    int notes100 = totalCents / 10000;
    totalCents %= 10000;

    int notes50 = totalCents / 5000;
    totalCents %= 5000;

    int notes20 = totalCents / 2000;
    totalCents %= 2000;

    int notes10 = totalCents / 1000;
    totalCents %= 1000;

    int notes5 = totalCents / 500;
    totalCents %= 500;

    int notes2 = totalCents / 200;
    totalCents %= 200;

    // Calculate the number of each coin
    int coins1 = totalCents / 100;
    totalCents %= 100;

    int coins50 = totalCents / 50;
    totalCents %= 50;

    int coins25 = totalCents / 25;
    totalCents %= 25;

    int coins10 = totalCents / 10;
    totalCents %= 10;

    int coins5 = totalCents / 5;
    totalCents %= 5;

    int coins1cent = totalCents / 1;

    // Output the result in the required format
    std::cout << "NOTAS:" << std::endl;
    std::cout << notes100 << " nota(s) de R$ 100.00" << std::endl;
    std::cout << notes50 << " nota(s) de R$ 50.00" << std::endl;
    std::cout << notes20 << " nota(s) de R$ 20.00" << std::endl;
    std::cout << notes10 << " nota(s) de R$ 10.00" << std::endl;
    std::cout << notes5 << " nota(s) de R$ 5.00" << std::endl;
    std::cout << notes2 << " nota(s) de R$ 2.00" << std::endl;

    std::cout << "MOEDAS:" << std::endl;
    std::cout << coins1 << " moeda(s) de R$ 1.00" << std::endl;
    std::cout << coins50 << " moeda(s) de R$ 0.50" << std::endl;
    std::cout << coins25 << " moeda(s) de R$ 0.25" << std::endl;
    std::cout << coins10 << " moeda(s) de R$ 0.10" << std::endl;
    std::cout << coins5 << " moeda(s) de R$ 0.05" << std::endl;
    std::cout << coins1cent << " moeda(s) de R$ 0.01" << std::endl;

    return 0;
}

// Another Solution:

#include <iostream>
#include <iomanip>

int main()
{
    double N;

    // Read the input value
    std::cin >> N;

    // Convert the value to an integer representing the total cents
    int totalCents = static_cast<int>(N * 100 + 0.5); // Adding 0.5 to handle rounding properly

    // Define the values of the notes and coins in cents
    int notes[6] = {10000, 5000, 2000, 1000, 500, 200};
    int coins[6] = {100, 50, 25, 10, 5, 1};

    // Print the notes
    std::cout << "NOTAS:" << std::endl;
    for (int i = 0; i < 6; ++i)
    {
        int count = totalCents / notes[i];
        totalCents %= notes[i];
        std::cout << count << " nota(s) de R$ " << std::fixed << std::setprecision(2) << notes[i] / 100.0 << std::endl;
    }

    // Print the coins
    std::cout << "MOEDAS:" << std::endl;
    for (int i = 0; i < 6; ++i)
    {
        int count = totalCents / coins[i];
        totalCents %= coins[i];
        std::cout << count << " moeda(s) de R$ " << std::fixed << std::setprecision(2) << coins[i] / 100.0 << std::endl;
    }

    return 0;
}