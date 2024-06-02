/*
Site Name : Bee Crowd

Problem ID: 1042

Problem Name:
Read three integers and sort them in ascending order. After, print these values in ascending order, a blank line and then the values in the sequence as they were readed.

Subject : Selection

Timelimit: 1

Input:
The input contains three integer numbers.

Output:
Present the output as requested above.

Example (Input & Output):
Input: 7, 21, -14
Output:
-14
7
21

7
21
-14

Input : -14, 21, 7
Output :
-14
7
21

-14
21
7
*/

#include <iostream>
#include <algorithm> // For std::sort
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    // Store the original values
    int original[3] = {a, b, c};

    // Create a copy of the original array and sort it
    int sorted[3] = {a, b, c};
    sort(sorted, sorted + 3);

    // Print the sorted values
    for (int i = 0; i < 3; i++)
    {
        cout << sorted[i] << endl;
    }

    // Print a blank line
    cout << endl;

    // Print the original values
    for (int i = 0; i < 3; i++)
    {
        cout << original[i] << endl;
    }

    return 0;
}