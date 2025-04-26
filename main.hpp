#include <iostream>
using namespace std;
//********************
// Declare Function Prototypes
//********************
void getTwoValues(int&, int&);
void getNextPrime(int);
void getPrevPrime(int);
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

void getTwoValues(int n1, int n2)
{
    int n1, n2;
    cin >> n1 >> n2; 
    cout << n1 << " " << n2 << " " << endl;
}

void getPrevPime(int n1)
{
    int n1;
    isPrime(n1);
}

void getNextPrime(int n1)
{
    int n1;
    isPrime(n1);
}
