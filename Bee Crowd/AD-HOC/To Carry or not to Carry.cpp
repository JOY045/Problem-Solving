/*
Site Name : Bee Crowd

Problem ID: 1026

Problem Name:

https://resources.beecrowd.com/gallery/images/problems/UOJ_1026.png

6+9=15 seems okay. But how come 4+6=2?

Look at, Mofiz worked hard throughout his Digital Logic course, but when he was asked to implement a 32 bit adder for the laboratory exam, he did some mistake in the design part. After scavenging the design for half an hour, he found his flaw!! He was doing bitwise addition but his carry bit always had zero output. Thus,


4  = 00000000 00000000 00000000 00000100
+6 = 00000000 00000000 00000000 00000110
----------------------------------------
2  = 00000000 00000000 00000000 00000010

It’s a good thing that he finally found his mistake, but it was too late. Considering his effort throughout the course, the instructor gave him one more chance. Mofiz had to write an efficient program that would take 2 unsigned 32 bit decimal numbers as input, and produce an unsigned 32 bit decimal number as the output adding in the same way as his circuit does.

Subject : XOR

Timelimit: 2

Input:
In each input line there will be a pair of integer separated by a single space. Input ends at EOF.

Output:
For each input line, the program must provide an output's line: the value after adding the two numbers in the "Mofiz way".

Example (Input & Output):
Input:
4 6
6 9

Output:
2
15
*/

#include <iostream>

int main()
{
    unsigned int a, b;
    while (std::cin >> a >> b)
    {
        unsigned int result = a ^ b; // XOR operation
        std::cout << result << std::endl;
    }
    return 0;
}
