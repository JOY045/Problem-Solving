/*
Site Name : Bee Crowd

Problem ID: 1039

Problem Name:
Nowadays a fire flower isn’t a thing considered strange for many young people. This is because a famous video game popularized this type of flower. In this game the protagonist gained superpowers by touching a fire flower, going to shoot small fireballs to defeat his enemies.

However, it was already said about fire flowers a long time ago. In Polish mythology, fire flowers are flowers of great mystical power guarded by evil spirits. She had this name because it was so bright that was impossible to look at her directly. Who got such flower possessed the ability to read the other people's minds, finding hidden treasures and repel all evil.

To get a fire flower, one person should look for it in a forest before midnight on the eve of Kupaly Noc. Exactly at midnight, she flourished. To harvest it would be necessary to draw a circle around her. It seems an easy task, however, the evil spirits that guard the flower of all try to distract anyone trying to pick the flower. If the person failed when trying to draw a circle around the flower, would have his life sacrificed.

Given two circles, one designed by an ambitious fire flowers hunter and another representing the area of the flower, your task is to determine if the hunter dies or becomes rich with his conquest.

Subject : Geometry

Timelimit: 1

Input:
The input contains many instances and ends with end of file (EOF). Each instance consists in a line with six integers: R1 (1 ≤ R1) , X1(|X1|), Y1(|Y1|), R2 (R2 ≤ 1000), X2(|X2|), Y2 (Y2 ≤ 1000).

The circle drawn by the hunter has radius R1 and center (X1; Y1). The circle that represents the flower area have radius R2 e center (X2; Y2).

Output:
For each test case we will have a line of output, containing “MORTO” (dead) or “RICO” (rich) if the hunt can pick the flower.

Example (Input & Output):
Input:
6 -8 2 3 0 0
7 3 4 2 4 5
3 0 0 4 0 0
5 4 7 1 8 7

Output: Total:
MORTO
RICO
MORTO
RICO
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int R1, X1, Y1, R2, X2, Y2;

    while (cin >> R1 >> X1 >> Y1 >> R2 >> X2 >> Y2)
    {
        // Calculate the distance between the centers of the two circles
        double distance = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));

        // Check if the hunter's circle completely contains the flower's circle
        if (distance + R2 <= R1)
        {
            cout << "RICO" << endl; // Rich
        }
        else
        {
            cout << "MORTO" << endl; // Dead
        }
    }

    return 0;
}