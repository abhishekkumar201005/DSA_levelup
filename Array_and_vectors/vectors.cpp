#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // demo
    // vector<int> arr = {1, 2, 3, 4, 10, 5};

    // // size of a vector
    // cout << arr.size() << endl;

    // // push_back
    // arr.push_back(16);

    // // capacity
    // cout << arr.capacity() << endl;

    // 2D Vector

    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8},
        {9, 10, 11}};

        for(int i=0;i<arr.size();i++){
            for(int number : arr[i]){
                cout<<number<<" ";
            }
            cout<<endl;
        }
     return 0;
}