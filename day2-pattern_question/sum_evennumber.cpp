#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number :";
    cin >> n;

    int sum = 0;
    int i = 1;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        i = i + 1;
    }
    cout << "Sum of even no.is :" << sum;
    return 0;
}