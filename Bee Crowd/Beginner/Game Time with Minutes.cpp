/*
Site Name : Bee Crowd

Problem ID: 1047

Problem Name:
Read the start time and end time of a game, in hours and minutes (initial hour, initial minute, final hour, final minute). Then print the duration of the game, knowing that the game can begin in a day and finish in another day,

Obs.: With a maximum game time of 24 hours and the minimum game time of 1 minute.

Subject : Selection

Timelimit: 1

Input:
Four integer numbers representing the start and end time of the game.

Output:
Print the duration of the game in hours and minutes, in this format: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” . Which means: the game lasted XXX hour(s) and YYY minutes.

Example (Input & Output):
Input: 7, 8, 9, 10
Output: O JOGO DUROU 2 HORA(S) E 2 MINUTO(S)

Input: 7, 7, 7, 7
Output : O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)

Input: 7, 10, 8, 9
Output : O JOGO DUROU 0 HORA(S) E 59 MINUTO(S)
*/

#include <iostream>

using namespace std;

int main()
{
    int startHour, startMinute, endHour, endMinute;
    cin >> startHour >> startMinute >> endHour >> endMinute;

    int startTotalMinutes = startHour * 60 + startMinute;
    int endTotalMinutes = endHour * 60 + endMinute;

    int durationMinutes;

    if (startTotalMinutes < endTotalMinutes)
    {
        durationMinutes = endTotalMinutes - startTotalMinutes;
    }
    else
    {
        durationMinutes = (24 * 60 - startTotalMinutes) + endTotalMinutes;
    }

    int durationHours = durationMinutes / 60;
    int durationRemainingMinutes = durationMinutes % 60;

    cout << "O JOGO DUROU " << durationHours << " HORA(S) E " << durationRemainingMinutes << " MINUTO(S)" << endl;

    return 0;
}