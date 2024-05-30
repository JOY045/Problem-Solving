/*
Site Name : Bee Crowd

Problem ID: 1024

Problem Name:
You have been asked to build a simple encryption program. This program should be able to send coded messages without someone been able to read them. The process is very simple. It is divided into two parts.

First, each uppercase or lowercase letter must be shifted three positions to the right, according to the ASCII table: letter 'a' should become letter 'd', letter 'y' must become the character '|' and so on. Second, each line must be reversed. After being reversed, all characters from the half on (truncated) must be moved one position to the left in ASCII. In this case, 'b' becomes 'a' and 'a' becomes '`'.

For example, if the resulting word of the first part is "tesla", the letters "sla" should be moved one position to the left. However, if the resulting word of the first part is "t#$A", the letters "$A" are to be displaced.

Subject : String Manipulation

Timelimit: 1

Input:
The input contains a number of cases of test. The first line of each case of test contains an integer N (1 ≤ N ≤ 1 * 10⁴), indicating the number of lines the problem should encrypt. The following N lines contain M characters each M (1 ≤ M ≤ 1 * 10³).

Output:
For each input, you must present the encrypted message.

Example (Input & Output):
Input:
4
Texto #3
abcABC1
vxpdylY .ph
vv.xwfxo.fd

Output:
3# rvzgV
1FECedc
ks. \n{frzx
gi.r{hyz-xx
*/

#include <iostream>
#include <string>
#include <algorithm>

void encryptLine(std::string &line)
{
    // First part: shift each letter 3 positions to the right
    for (char &c : line)
    {
        if (std::isalpha(c))
        {
            c += 3;
        }
    }

    // Second part: reverse the line
    std::reverse(line.begin(), line.end());

    // Third part: shift characters from the half on one position to the left
    int length = line.size();
    for (int i = length / 2; i < length; ++i)
    {
        line[i] -= 1;
    }
}

int main()
{
    // Declare the number of lines
    int N;
    std::cin >> N;
    std::cin.ignore(); // To ignore the newline character after the integer input

    // Read each line, encrypt it, and print the result
    for (int i = 0; i < N; ++i)
    {
        std::string line;
        std::getline(std::cin, line);
        encryptLine(line);
        std::cout << line << std::endl;
    }

    return 0;
}
