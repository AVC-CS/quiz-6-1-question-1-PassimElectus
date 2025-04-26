#include <iostream>
using namespace std;
//********************
// Declare Function Prototypes
//********************
void getTwoValues(int&, int&);
int getNextPrime(int);
int getPrevPrime(int);
bool isPrime();

// ******************************
// Implement all your functions here
// ******************************

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i*i <= num; i++)
    {
        if(num % i == 0) return false;
    }
    return true;
}

void getTwoValues(int& begin, int& end)
{
    cin >> begin >> end; 
}

int getPrevPrime(int num)
{
    int prev = num - 1;
    while (prev >= 2)
    {
        if (isPrime(prev))
        {
            return prev;
        }
        prev--;
    }
}

int getNextPrime(int num)
{
    int next = num + 1;
    while (true)
    {
        if (isPrime(next))
        {
            return next;
        }
        next++;
    }
}
