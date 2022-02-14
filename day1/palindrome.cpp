#include <iostream>
using namespace std;
string palindrome(int n)
{
    int t = 0, r = 0;
    int ori = n;
    while (n > 0)
    {
        r = n % 10;
        t = t * 10 + r;
        n = n / 10;
    }
    if (t == ori)
    {
        return "Yes";
    }
    else return "No";
}
int main()
{
    int n;
    cout << "enter value of n :";
    cin >> n;
    cout << palindrome(n);
    return 0;
}