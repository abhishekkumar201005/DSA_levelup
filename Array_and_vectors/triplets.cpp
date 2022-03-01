#include <iostream>
using namespace std;
void triplets(int arr[], int n, int target)
{
    for (int i = 0; i < n - 2; i++)
    {
        int x = arr[i];
        for (int j = i + 1; j < n - 1; j++)
        {
            int y = arr[j];
            for (int k = j + 1; k < n; k++)
            {
                int z = arr[k];

                if (x + y + z == target)
                {
                    cout <<" ( " << x << " " << y << " " << z << " ) ";
                }
            }
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
    int n = sizeof(arr) / sizeof(int);
    int target = 18;
    triplets(arr, n, target);
    return 0;
}