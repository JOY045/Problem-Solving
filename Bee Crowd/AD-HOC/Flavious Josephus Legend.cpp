/*
Site Name : Bee Crowd

Problem ID: 1030

Problem Name:
The Josephus' problem is known because of the Flavius Josephus' legend, a Jewish historian living in the 1st century. According to Josephus' account of the siege of Yodfat, he and his 40 comrade soldiers were trapped in a cave, the exit of which one was blocked by Romans. They chose suicide over capture and decided that they would form a circle and start killing themselves skipping three in three. Josephus says that, by luck or maybe by the hand of God, he remained the last and gave up to the Romans.”

Subject : AD HOC, Simulation, Josephus Problem, Recursion

Timelimit: 1

Input:
There are NC (1 ≤ NC ≤ 30 ) test cases. In each input test case there will be a pair of positive integer numbers n (1 ≤ n ≤ 10000 ) and k (1 ≤ k ≤ 1000). The number n represents the quantity of people in the circle, numbered from 1 to n. The number k represents the size of step between two men in the circle.

Follow an example with 5 men and step 2: In this example the remaining element is 3.

https://resources.beecrowd.com/gallery/images/problems/UOJ_1030_b.jpg

The data must be read from standard input.

Output:
For each test case we will have an output line, presenting in the following format: Case n: m always with a space before n and m.

Example (Input & Output):
Input:
3
5 2
6 3
1234 233

Output:
Case 1: 3
Case 2: 1
Case 3: 25
*/

#include <stdio.h>
#include <cstring>

int flavious(int x, int y)
{
    if (x == 1)
        return 0;
    return (flavious(x - 1, y) + y) % x;
}

int remaining(int n, int k)
{
    int r = 0;
    for (int i = 2; i <= n; i++)
        r = (r + k) % i;

    return r;
}

int main()
{
    int n, x, y, j, num, pulo;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        // printf("Case %d: %d\n",i+1,flavious(x,y)+1);
        printf("Case %d: %d\n", i + 1, remaining(x, y) + 1);
    }
    return 0;
}