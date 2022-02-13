#include <iostream>
using namespace std;

// prime Number
int isPrime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cout << "enter value of n :";
    cin >> n;
    int a = isPrime(n);
    if (a == 1)
    {
        cout << "isPrime Number";
    }
    else
    {
        cout << "is notPrime Number";
    }
}