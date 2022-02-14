#include<iostream>
using namespace std;
int main(){

char ch;
cin>>ch;
cout<<"Character is: "<<ch<<endl;

if(ch>='A' and ch<='Z'){
    cout<<"This is upper ";
}
else if(ch>='a' and ch<='z'){
    cout<<"This is lower ";
}
else if(ch>='0' and ch<='9'){
    cout<<"This is numeric";
}

    return 0;
}