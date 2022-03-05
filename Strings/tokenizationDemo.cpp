#include<iostream>
#include<sstream>
#include<vector>
#include<cstring>
using namespace std;

int main(){
    // string input;
    // getline(cin,input);

    // //create a string stream object
    // stringstream ss(input);

    // //method >> or << operator
    // string token;
    // vector<string>tokens;
    // while(getline(ss,token,' ')){
    //     tokens.push_back(token);
    // }

    // //print all tokens
    // for(auto token:tokens){
    //     cout<<token<<",";
    // }



    //-----------code 2-----------------

    char input[1000];
    cin.getline(input,1000);

    //strtok ---internally maintain the state of the string you passes in the last fn
    char *token=strtok(input," ");

    while(token !=NULL){
        cout<<token<<endl;
        token=strtok(NULL," ");
    }
    return 0;

}