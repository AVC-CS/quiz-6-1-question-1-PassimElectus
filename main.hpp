#include <iostream>
using namespace std;
//********************
// Declare Function Prototypes
//********************
void getTwoValues(int, int);
void getNextPrime(int, int);
void getPrevPrime(int, int);
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
    for (int i = 2; i< num; i++)
    {
        cout << "placeholder";
    }
}

void getTwoValues(int n1, int n2)
{
    int n1, n2;
    cin >> n1 >> n2; 
    cout << n1 << " " << n2 << " " << endl;
}

void getPrevPime(int n1)
{

}
