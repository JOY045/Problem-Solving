/*
Site Name : Bee Crowd

Problem ID: 1023

Problem Name:
Due to the continuous drought that happened recently in some regions of Brazil, the Federal Government created an agency to assess the consumption of these regions in order to verify the behavior of the population at the time of rationing. This agency will take some cities (for sampling) and it will verify the consumption of each of the townspeople and the average consumption per inhabitant of each town.

Subject : Sort, Counting Sort, Ad Hoc

Timelimit: 2

Input:
The input contains a number of test's cases. The first line of each case of test contains an integer N (1 ≤ N ≤ 1 * 10 6), indicating the amount of properties. The following N lines contains a pair of values X (1 ≤ X ≤ 10) and Y ( 1 ≤ Y ≤ 200) indicating the number of residents of each property and its total consumption (m3). Surely, no residence consumes more than 200 m3 per month. The input's end is represented by zero.

Output:
For each case of test you must present the message “Cidade# n:”, where n is the number of the city in the sequence (1, 2, 3, ...), and then you must list in ascending order of consumption, the people's amount followed by a hyphen and the consumption of these people, rounding the value down. In the third line of output you should present the consumption per person in that town, with two decimal places without rounding, considering the total real consumption. Print a blank line between two consecutives test's cases. There is no blank line at the end of output.

Example (Input & Output):
Input:
3
3 22
2 11
3 39
5
1 25
2 20
3 31
2 40
6 70
2
1 1
3 2
0
Output:
Cidade# 1:
2-5 3-7 3-13
Consumo medio: 9.00 m3.

Cidade# 2:
5-10 6-11 2-20 1-25
Consumo medio: 13.28 m3.

Cidade# 3:
3-0 1-1
Consumo medio: 0.75 m3.
*/

#include <stdio.h>
#include <stdlib.h>
#include <map>
#include <math.h>

int main()
{

    int n, x, y, totalx, totaly, count;
    count = 0;

    while (1)
    {
        scanf("%d\n", &n);
        if (n == 0)
            break;
        if (count != 0)
            printf("\n");
        totalx = totaly = 0;
        std::map<int, int> Resident;

        for (int i = 0; i < n; i++)
        {
            scanf("%d %d\n", &x, &y);
            totalx += x;
            totaly += y;
            std::pair<std::map<int, int>::iterator, bool> ret;
            ret = Resident.insert(std::pair<int, int>(y / x, x));
            if (ret.second == false)
            {
                Resident[y / x] += x;
            }
        }
        count++;

        printf("Cidade# %d:\n", count);

        std::map<int, int>::const_iterator final_iter = Resident.end();
        --final_iter;
        for (std::map<int, int>::const_iterator it = Resident.begin(); it != Resident.end(); ++it)
        {
            if (it == final_iter)
                printf("%d-%d\n", it->second, it->first);
            else
                printf("%d-%d ", it->second, it->first);
        }
        printf("Consumo medio: %.2f m3.\n", floor(100 * (float)totaly / totalx) / 100);
    }

    return 0;
}