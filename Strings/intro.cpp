#include<iostream>
#include<string>
using namespace std;

int main(){
    string S;
    getline(cin,S);

    //iterate
    for(char ch:S){
        cout<<ch<<' ';
    }
    cout<<S<<endl;
    return 0;
}