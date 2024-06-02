/*
Site Name : Bee Crowd

Problem ID: 1049

Problem Name:
In this problem, your job is to read three Portuguese words. These words define an animal according to the table below, from left to right. After, print the chosen animal defined by these three words.

https://resources.beecrowd.com/gallery/images/problems/UOJ_1049_b.png

Subject : Selection

Timelimit: 1

Input:
The input contains 3 words, one by line, that will be used to identify the animal, according to the above table, with all letters in lowercase.

Output:
Print the animal name according to the given input.

Example (Input & Output):
Input:
vertebrado
mamifero
onivoro
Output: homem

Input:
vertebrado
ave
carnivoro
Output: aguia

Input:
invertebrado
anelideo
onivoro
Output: minhoca
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word1, word2, word3;

    // Read the three input words
    cin >> word1 >> word2 >> word3;

    // Determine the animal based on the input words
    if (word1 == "vertebrado")
    {
        if (word2 == "ave")
        {
            if (word3 == "carnivoro")
            {
                cout << "aguia" << endl;
            }
            else if (word3 == "onivoro")
            {
                cout << "pomba" << endl;
            }
        }
        else if (word2 == "mamifero")
        {
            if (word3 == "onivoro")
            {
                cout << "homem" << endl;
            }
            else if (word3 == "herbivoro")
            {
                cout << "vaca" << endl;
            }
        }
    }
    else if (word1 == "invertebrado")
    {
        if (word2 == "inseto")
        {
            if (word3 == "hematofago")
            {
                cout << "pulga" << endl;
            }
            else if (word3 == "herbivoro")
            {
                cout << "lagarta" << endl;
            }
        }
        else if (word2 == "anelideo")
        {
            if (word3 == "hematofago")
            {
                cout << "sanguessuga" << endl;
            }
            else if (word3 == "onivoro")
            {
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}