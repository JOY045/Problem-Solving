/*
Site Name : Bee Crowd

Problem ID: 1046

Problem Name:
Read the start time and end time of a game, in hours. Then calculate the duration of the game, knowing that the game can begin in a day and finish in another day, with a maximum duration of 24 hours. The message must be printed in portuguese “O JOGO DUROU X HORA(S)” that means “THE GAME LASTED X HOUR(S)”

Subject : Selection

Timelimit: 1

Input:
Two integer numbers representing the start and end time of a game.

Output:
Print the duration of the game as in the sample output.

Example (Input & Output):
Input: 16, 2
Output: O JOGO DUROU 10 HORA(S)

Input: 0, 0
Output : O JOGO DUROU 24 HORA(S)

Input: 2, 16
Output : O JOGO DUROU 14 HORA(S)
*/

#include <iostream>

using namespace std;

int main()
{
    int start, end;
    cin >> start >> end;

    int duration;

    if (start < end)
    {
        // If the game starts and ends on the same day
        duration = end - start;
    }
    else
    {
        // If the game starts on one day and ends on the next day
        duration = 24 - start + end;
    }

    cout << "O JOGO DUROU " << duration << " HORA(S)" << endl;

    return 0;
}