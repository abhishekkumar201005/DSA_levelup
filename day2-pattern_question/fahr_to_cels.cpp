#include <iostream>
using namespace std;
int main(){
    int fahr;
    cout<<"temp. in fahr is :";
    cin>>fahr;
    int cel=(fahr-32)/1.8;
    cout<<"celsius is :" <<cel<<endl;
    return 0;
}