#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string paragraph = "We are learning about STL strings. STL string class is quite powerful";
    int n = paragraph.length();
    string word;
    getline(cin, word);

    //store address
    vector<int>result;
    // find multiple times
        int index = paragraph.find(word);
        while(index != -1)
        { result.push_back(index);
        index = paragraph.find(word,index+1);
        }
        
    // find function
    for(int ch :result){
        cout<<ch<<" ";
    }
    return 0;
}