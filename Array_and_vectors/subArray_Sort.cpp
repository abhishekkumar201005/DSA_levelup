#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Approach -1 brute force
// void subarrySort(vector<int> a)
// {
//     // copy element into vector b
//     vector<int> b(a);
//     sort(a.begin(), a.end());

//     // comparison
//     int i = 0;
//     int n = a.size();
//     while (i < n and a[i] == b[i])
//     {
//         i++;
//     }
//     int j = n - 1;
//     while (j >= 0 and a[j] == b[j])
//     {
//         j--;
//     }
//     if (i == n)
//     {
//         cout<<" {-1,-1} ";
//     }
//     cout<<"{"<<i<<" "<< j<<"}";
// }

// Approach 2
bool outOfOrder(vector<int> arr, int i)
{
    int x = arr[i];
    if (i == 0)
    {
        return x > arr[1];
    }
    if (i == arr.size() - 1)
    {
        return x < arr[i - 1];
    }
    return x > arr[i + 1] or x < arr[i - 1];
}
pair<int, int> subarraySort(vector<int> arr)
{
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        int x = arr[i];
        if (outOfOrder(arr, i))
        {
            smallest = min(smallest, x);
            largest = max(largest, x);
        }
    }
    // find the right index where smallest and largest lie
    if (smallest == INT_MAX) 
    {
        return {-1, -1};
    }
    // return
    int left = 0;
    while (smallest >= arr[left])
    {
        left++;
    }
    int right=arr.size()-1;
    while(largest<=arr[right]){
        right--;
    }
    return {left,right};
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 8, 6, 7, 9, 10, 11};
    // subarrySort(arr);
    auto p = subarraySort(arr);
    cout << p.first << " and " << p.second << endl;
    return 0;
}