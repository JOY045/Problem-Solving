/*
Site Name : Bee Crowd

Problem ID: 1018

Problem Name:
In this problem you have to read an integer value and calculate the smallest possible number of banknotes in which the value may be decomposed. The possible banknotes are 100, 50, 20, 10, 5, 2 and 1. Print the read value and the list of banknotes.

Subject : Sequential

Timelimit: 1

Input:
The input file contains an integer value N (0 < N < 1000000).

Output:
Print the read number and the minimum quantity of each necessary banknotes in Portuguese language, as the given example. Do not forget to print the end of line after each line, otherwise you will receive “Presentation Error”.

Example (Input & Output):
Input: 576
Output:
576
5 nota(s) de R$ 100.00
1 nota(s) de R$ 50.00
1 nota(s) de R$ 20.00
0 nota(s) de R$ 10.00
1 nota(s) de R$ 5.00
0 nota(s) de R$ 2.00
1 nota(s) de R$ 1.00

Input : 11257
Output :
11257
112 nota(s) de R$ 100.00
1 nota(s) de R$ 50.00
0 nota(s) de R$ 20.00
0 nota(s) de R$ 10.00
1 nota(s) de R$ 5.00
1 nota(s) de R$ 2.00
0 nota(s) de R$ 1.00
*/

#include <iostream>

int main()
{
    // Declare the variable for the input value
    int N;

    // Input the value
    std::cin >> N;

    // Print the original value
    std::cout << N << std::endl;

    // Calculate the number of each banknote
    int notes100 = N / 100;
    N %= 100;

    int notes50 = N / 50;
    N %= 50;

    int notes20 = N / 20;
    N %= 20;

    int notes10 = N / 10;
    N %= 10;

    int notes5 = N / 5;
    N %= 5;

    int notes2 = N / 2;
    N %= 2;

    int notes1 = N / 1;
    N %= 1;

    // Print the results in the required format
    std::cout << notes100 << " nota(s) de R$ 100,00" << std::endl;
    std::cout << notes50 << " nota(s) de R$ 50,00" << std::endl;
    std::cout << notes20 << " nota(s) de R$ 20,00" << std::endl;
    std::cout << notes10 << " nota(s) de R$ 10,00" << std::endl;
    std::cout << notes5 << " nota(s) de R$ 5,00" << std::endl;
    std::cout << notes2 << " nota(s) de R$ 2,00" << std::endl;
    std::cout << notes1 << " nota(s) de R$ 1,00" << std::endl;

    return 0;
}

// Another Solution:

#include <iostream>

int main()
{
    int N;

    // Read the input value
    std::cin >> N;

    // Print the original value
    std::cout << N << std::endl;

    // Define the values of the banknotes
    int banknotes[7] = {100, 50, 20, 10, 5, 2, 1};
    int count[7] = {0};

    // Calculate the minimum number of each banknote needed
    for (int i = 0; i < 7; ++i)
    {
        count[i] = N / banknotes[i];
        N %= banknotes[i];
    }

    // Print the result
    std::cout << count[0] << " nota(s) de R$ 100,00" << std::endl;
    std::cout << count[1] << " nota(s) de R$ 50,00" << std::endl;
    std::cout << count[2] << " nota(s) de R$ 20,00" << std::endl;
    std::cout << count[3] << " nota(s) de R$ 10,00" << std::endl;
    std::cout << count[4] << " nota(s) de R$ 5,00" << std::endl;
    std::cout << count[5] << " nota(s) de R$ 2,00" << std::endl;
    std::cout << count[6] << " nota(s) de R$ 1,00" << std::endl;

    return 0;
}