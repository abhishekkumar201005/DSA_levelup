#include <iostream>
#include <vector>
#include<unordered_set>
using namespace std;
int longestChain(vector<int>arr){
int n=arr.size();
unordered_set<int>s;

//Data inside a set
for(int x:arr){
    s.insert(x);
}
int largest=1;
//itereate over arr
for(auto element:s){
    int parent=element-1;
    if(s.find(parent)==s.end()){
        //find entire band
        int next=element+1;
        int cnt=1;
        while(s.find(next)!=s.end()){
            next++;
            cnt++;
        }
        if(cnt>largest){
            largest=cnt;
        }
    }
}
return largest;
}
int main(){
    vector<int>arr{1,9,3,0,18,5,2,4,10,7,12,6};
    cout<<longestChain(arr);
    return 0;
}