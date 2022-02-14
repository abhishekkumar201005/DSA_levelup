#include <iostream>
using namespace std;
string armstrongNumber(int n){
        // code here
 int rem=0,sum=0,temp=n;
while (temp>0){
rem=temp%10;
sum+=rem*rem*rem;
temp=temp/10;
}
return sum==n?"Yes":"No";
    }
int main(){
    int n;
    cout<<"enter value of n :";
    cin>>n;
    cout<<armstrongNumber(n);
    return 0;
}