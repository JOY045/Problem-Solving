/*
Site Name : Bee Crowd

Problem ID: 1027

Problem Name:

https://resources.beecrowd.com/gallery/images/problems/UOJ_1027.png

The task is simple. Through some critical points in 2D, you have to draw a wave like curve. Your goal is to include as many points as possible.

*** There will be an imaginary line y = a, which we call the major axis for the curve.
*** All the points on the curve should have different x coordinates. Their y coordinates should be of form a-1 or a+1.

Two consecutive points on the curve should have a difference of 2 in their y coordinate.

Subject : DP (LIS)

Timelimit: 2

Input:
There will be no more than 222 test cases. Each test case starts with an integer N, the number of points in the test case. In the next N lines, there will be N pair of integers giving the x and y coordinate of the points. There will be no more than 1000 points in each test case. All coordinates are integers -- they'd fit in a signed 2 byte integer data type. The data must be read of default input.

Output:
For each test case print a number -- the maximum number of critical points that can be included in a curve drawn from the given points.

Example (Input & Output):
Input:
10
0 1
1 0
1 -1
2 -2
3 1
3 -1
3 -2
4 1
4 -1
5 -1
10
0 2
2 0
1 -1
2 -2
3 1
3 -1
3 -2
4 1
4 -1
5 –1

Output:
4
3
*/

#include <cstdio>
#include <algorithm>
#define MAX 1010

using namespace std;

int t[MAX];
int b[MAX];
pair<int, int> coord[MAX];

int main()
{
    int n, x, y;

    while (scanf("%d", &n) == 1)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &x, &y);
            coord[i] = make_pair(x, y);
        }
        sort(coord, coord + n);

        //		for(int i = 0 ; i < n ; i ++)
        //		{
        //			printf("%d %d\n",coord[i].first ,coord[i].second );
        //		}

        t[0] = 1;
        b[0] = 1;

        for (int i = 1; i < n; i++)
        {
            int maxtop = 1;
            int maxbot = 1;
            for (int j = 0; j < i; j++)
            {
                // Verifica se eu posso colocar o ponto i depois do j em cima
                if (coord[i].first > coord[j].first && coord[i].second == coord[j].second + 2)
                    maxtop = max(maxtop, b[j] + 1);
                // Verifica se eu posso colocar o ponto i depois do j em baixo
                if (coord[i].first > coord[j].first && coord[i].second == coord[j].second - 2)
                    maxbot = max(maxbot, t[j] + 1);
            }
            t[i] = maxtop;
            b[i] = maxbot;
        }

        int maximo = 1;
        for (int i = 0; i < n; i++)
        {
            maximo = max(maximo, t[i]);
            maximo = max(maximo, b[i]);
        }

        printf("%d\n", maximo);
    }

    return 0;
}