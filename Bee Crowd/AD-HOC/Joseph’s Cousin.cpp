/*
Site Name : Bee Crowd

Problem ID: 1032

Problem Name:
The Joseph’s problem is notoriously known. For those who are not familiar with the problem, among people numbered 1,2…n, standing in circle every mth is going to be executed and only the life of the last remaining person will be saved. Joseph was smart enough to choose the position of the last remaining person, thus saving his life to give the message about the incident.

Although many good programmers have been saved since Joseph spread out this information, Joseph’s cousin introduced a new variant of the malignant game. This insane character is known for its barbarian ideas and wishes to clean up the world from silly programmers. We had to infiltrate some agents of the ACM in order to know the process in this new mortal game.

In order to save yourself from this evil practice, you must develop a tool capable of predicting which person will be saved.

The Destructive Process

The persons are eliminated in a very peculiar order; m is a dynamical variable, which each time takes a different value corresponding to the prime numbers’ succession (2,3,5,7…). So in order to kill the ith person, Joseph’s cousin counts up to the ith prime.

Subject : AD HOC, Simulation, Josephus Problem, Number Theory, Primes Sieve

Timelimit: 1

Input:
 It consists of separated lines containing n [1..3501], and finishes with a 0.

Output:
The output will consist in separated lines containing the person's position which the life will be saved.

Example (Input & Output):
Input:
6
0

Output:
4
*/

#include <iostream>
#include <vector>

using namespace std;

// Function to generate prime numbers up to a given limit using the Sieve of Eratosthenes
vector<int> generatePrimes(int limit)
{
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= limit; ++i)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= limit; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= limit; ++i)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }
    return primes;
}

// Function to solve the Josephus problem with dynamic steps based on prime numbers
int josephusWithPrimes(int n, const vector<int> &primes)
{
    vector<int> people(n);
    for (int i = 0; i < n; ++i)
    {
        people[i] = i + 1;
    }

    int index = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        int primeStep = primes[i] - 1;               // Get the (i+1)th prime and use it as step size
        index = (index + primeStep) % people.size(); // Calculate the index to eliminate
        people.erase(people.begin() + index);        // Eliminate the person at the index
    }

    return people[0]; // Return the last remaining person
}

int main()
{
    const int MAX_N = 3500;
    const int MAX_PRIME_LIMIT = 32650; // A limit high enough to get primes for n up to 3500
    vector<int> primes = generatePrimes(MAX_PRIME_LIMIT);

    int n;
    while (cin >> n && n != 0)
    {
        int result = josephusWithPrimes(n, primes);
        cout << result << endl;
    }

    return 0;
}