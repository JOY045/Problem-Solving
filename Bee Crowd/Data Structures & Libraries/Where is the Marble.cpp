/*
Site Name : Bee Crowd

Problem ID: 1025

Problem Name:
Raju and Meena love to play with Marbles. They have a lot of marbles with numbers written on them. In the beginning, Raju would place the marbles one after another in ascending order of the numbers written on them. Then, Meena would ask Raju to find the first marble with a certain number. She would count 1...2...3. Raju gets one point for correct answer, and Meena gets the point if Raju fails. After some fixed number of attempts, the game ends and the player with maximum points wins. Today it's your chance to play as Raju. Being a smart kid, you have in your advantage the computer. But don't underestimate Meena, she wrote a program to keep track how much time you're taking to give all the answers. So now you have to write a program, which will help you in your role as Raju.

Subject : Binary Search, Sort

Timelimit: 2

Input:
There can be multiple test cases. The total number of test cases is less than 65. Each test case consists begins with 2 integers: N the number of marbles and Q the number of queries Meena would make. The next N lines would contain the numbers written on the N marbles. These marble numbers will not come in any particular order. Following Q lines will have Q queries. Be assured, none of the input numbers are greater than 10000 and none of them are negative.

Input is terminated by a test case where N = 0 and Q = 0.

Output:
For each test case output there must be a serial number of the test case. For each query, write one line of output. The format of this line will depend on whether the number is consulted or not written in one of the marbles.

The two different formats are described below:
'x found at y', if the first marble with number x was found at position y. Positions are numbered 1, 2,..., N.
'x not found', if the marble with number x is not present.

Example (Input & Output):
Input:
4 1
2
3
5
1
5
5 2
1
3
3
3
1
2
3
0 0

Output:
CASE# 1:
5 found at 4
CASE# 2:
2 not found
3 found at 3
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int testCaseNumber = 1;

    while (true)
    {
        int N, Q;
        cin >> N >> Q;

        if (N == 0 && Q == 0)
        {
            break;
        }

        vector<int> marbles(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> marbles[i];
        }

        // Sort the marbles
        sort(marbles.begin(), marbles.end());

        cout << "CASE# " << testCaseNumber << ":" << endl;

        for (int i = 0; i < Q; ++i)
        {
            int query;
            cin >> query;

            // Use lower_bound to find the first occurrence of the query
            auto it = lower_bound(marbles.begin(), marbles.end(), query);

            if (it != marbles.end() && *it == query)
            {
                cout << query << " found at " << (it - marbles.begin() + 1) << endl;
            }
            else
            {
                cout << query << " not found" << endl;
            }
        }

        ++testCaseNumber;
    }

    return 0;
}