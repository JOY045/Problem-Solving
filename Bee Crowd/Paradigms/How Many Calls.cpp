/*
Site Name : Bee Crowd

Problem ID: 1033

Problem Name:
The Fibonacci number is defined by the following recurrence:
fib(0) = 0
fib(1) = 1
fib(n) = fib(n-1)+fib(n-2)
But we're not interested in the Fibonacci numbers here. We would like to know how many calls does it take to evaluate the n Fibonacci number if we follow the given recurrence. Since the numbers are going to be quite large, we'd like to make the job a bit easy for you. We'd only need the last digit of the number of calls, when this number is represented in base b.

Subject : Recurrence Relations, Fibonacci Numbers

Timelimit: 1

Input:
Input consists of several test cases. For each test there will be two integers n (0 ≤ n < (263 - 1)) and b (1 < b ≤ 10000). Input is terminated by a test case where n=0 and b=0, you must not process this test case.

Output:
For each test case, print the number of test case first. Then print n, b and the last digit (in base b) of the number of calls. There should be a single space between the two numbers of a line. Note that the last digit has to be represented in decimal number system.

Example (Input & Output):
Input:
0 100
1 100
2 100
3 100
10 10
3467 9350
0 0

Output:
Case 1: 0 100 1
Case 2: 1 100 1
Case 3: 2 100 3
Case 4: 3 100 5
Case 5: 10 10 7
Case 6: 3467 9350 7631
*/

#include <algorithm>
#include <bitset>
#include <cassert>
#include <cfloat>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
#define MAXN 10000
#define pb push_back
#define mp make_pair

using namespace std;

typedef vector<int> vi;
typedef long long int64;
typedef unsigned long long uint64;

struct Matrix
{
    int64 mat[2][2];
};

Matrix matMul(Matrix a, Matrix b, int64 m)
{
    Matrix ans;
    int i, j, k;
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j)
            for (ans.mat[i][j] = k = 0; k < 2; ++k)
                ans.mat[i][j] += (a.mat[i][k] * b.mat[k][j]) % m;
    return ans;
}

int64 matPow(Matrix base, int64 p, int64 m)
{
    Matrix ans;
    int i, j;
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j)
            ans.mat[i][j] = (i == j);
    while (p)
    {
        if (p & 1)
            ans = matMul(ans, base, m);
        base = matMul(base, base, m);
        p >>= 1;
    }
    return ans.mat[0][0];
}

int main()
{
    int t = 1;
    int64 a, b;
    while (scanf("%lld %lld", &a, &b) && a + b)
    {
        Matrix ans;
        ans.mat[0][0] = ans.mat[0][1] = ans.mat[1][0] = 1, ans.mat[1][1] = 0;
        if (a <= 1)
            printf("Case %d: %lld %lld 1\n", t++, a, b);
        else
            printf("Case %d: %lld %lld %lld\n", t++, a, b, (2 * matPow(ans, a, b) - 1) % b);
    }
    return 0;
}

// Another Solution
#include <bits/stdc++.h>
using namespace std;
typedef long long Nu;

int bigmod(Nu n, const int M)
{
    if (n <= 0)
        return 0;

    Nu a, b, c, d, r;
    a = 1, b = 0, c = 0, d = 1;
    --n;

    while (n > 0)
    {
        if (n & 1)
        {
            r = ((d * b) + (c * a)) % M;
            b = (d * (b + a) + (c * b)) % M;
            a = r;
        }

        r = (c * c + d * d) % M;
        d = (d * (2 * c + d)) % M;
        c = r;

        n = n / 2;
    }

    return (a + b) % M;
}

int main()
{

    Nu k;
    int g, h, re = 0;

    while (cin >> k >> g && (k || g))
    {
        h = ((2 * bigmod(k + 1, g)) - 1 + g) % g;
        printf("Case %d: %lld %d %d\n", ++re, k, g, h);
    }

    return 0;
}