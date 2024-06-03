/*
Site Name : Bee Crowd

Problem ID: 1052

Problem Name:
Read an integer number between 1 and 12, including. Corresponding to this number, you must print the month of the year, in english, with the first letter in uppercase.

Subject : Selection

Timelimit: 1

Input:
The input contains only an integer number.

Output:
Print the name of the month according to the input number, with the first letter in uppercase.

Example (Input & Output):
Input: 4
Output: April
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int monthNumber;
    cin >> monthNumber;

    string months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};

    if (monthNumber >= 1 && monthNumber <= 12)
    {
        cout << months[monthNumber - 1] << endl;
    }
    else
    {
        cout << "Invalid month number" << endl;
    }

    return 0;
}