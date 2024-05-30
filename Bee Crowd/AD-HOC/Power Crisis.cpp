/*
Site Name : Bee Crowd

Problem ID: 1031

Problem Name:
During a power crisis in New Zealand last winter (caused by a shortage of rain and hence low levels in the hydro dams), a contingency scheme was developed to turn off the power to areas of the country in a systematic, totally fair, manner. The country was divided up into N regions (Auckland was region number 1, and Wellington number 13). A number, m, would be picked `at random', and the power would first be turned off in region 1 (clearly the fairest starting point) and then in every m'th region after that, wrapping around to 1 after N, and ignoring regions already turned off. For example, if N = 17 and m = 5, power would be turned off to the regions in the order: 1,6,11,16,5,12,2,9,17,10,4,15,14,3,8,13,7.

The problem is that it is clearly fairest to turn off the region of Wellington by last(after all, that is where the Electricity headquarters are), so for a given N, the `random' number m needs to be carefully chosen so that region 13 is the last region selected.

https://resources.beecrowd.com/gallery/images/problems/UOJ_1031.jpg

Write a program that will read in the number of regions and then determine the smallest number m that will ensure that Wellington (region 13) can function while the rest of the country is blacked out.The Josephus' problem is known because of the Flavius Josephus' legend, a Jewish historian living in the 1st century. According to Josephus' account of the siege of Yodfat, he and his 40 comrade soldiers were trapped in a cave, the exit of which one was blocked by Romans. They chose suicide over capture and decided that they would form a circle and start killing themselves skipping three in three. Josephus says that, by luck or maybe by the hand of God, he remained the last and gave up to the Romans.”

Subject : AD HOC, Simulation, Josephus Problem

Timelimit: 1

Input:
Input will consist of a series of lines, each line containing the number of regions N (13 ≤ N ≤ 100 ). The file will be terminated by a line consisting of a single 0.

Output:
Output will consist of a series of lines, one for each line of the input. Each line will consist of the number m according to the above scheme.

Example (Input & Output):
Input:
17
0

Output:
7
*/

#include <cstdio>
#include <vector>

#define PB push_back
#define SC1(a) scanf("%d", &a)
#define REP(i, a, b) for (int i = (a); i <= (b); ++i)

using namespace std;

typedef vector<int> VI;

bool crisis(int n, int k)
{
    int p = 0;
    VI v;

    REP(i, 1, n)
    v.PB(i);

    if (v.size() > 1)
    {
        do
        {
            v.erase(v.begin() + p);
            p = (p - 1 + k) % v.size();
        } while (v.size() > 1);
    }

    return (v[0] == 13);
}

int main(int argc, char const *argv[])
{
    int n, r;

    while (SC1(n) && n)
    {
        r = 1;
        while (!crisis(n, r))
            r++;

        printf("%d\n", r);
    }

    return 0;
}