#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> triplets(vector<int> arr, int sum)
{ 
    // logic
    int n=arr.size();
    sort(arr.begin(), arr.end());
    vector<vector<int>> result;
    // pick every a[i]
    for (int i = 0; i <=n-3; i++)
    {
        int j = i + 1;
        int k = n- 1;
        // two pinter approach
        while (j < k)
        {
            int currSum = arr[i];
            currSum += arr[j];
            currSum += arr[k];
            if (currSum == sum)
            {
                result.push_back({arr[i], arr[j], arr[k]});
                j++;
                k--;
            }
            else if (currSum > sum)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }
    return result;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
    int sum = 18;
    auto result = triplets(arr, sum);
    for (auto v : result)
    {
        for (auto no : v)
        {
            cout << no << ",";
        }
        cout << endl;
    }
    return 0;
}