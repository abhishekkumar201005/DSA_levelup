#include <iostream>
using namespace std;
void pairs(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            int y = arr[j];
            if (x + y == target)
            {
                cout << x << " " << y << endl;
            }
        }
        
    }
    cout << endl;
}
int main()
{
    int arr[] = {10, 5, 2, 3, -6, 9, 11};
    int n = sizeof(arr) / sizeof(int);
    int target = 4;
    pairs(arr, n, target);
    return 0;
}