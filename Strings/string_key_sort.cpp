/* 
input :
3
92 022
82 12
77 13
2 false numeric

output:
82 12 
77 13
92 022
 */

#include <iostream>
#include <cstring>
#include <vector>
#include<algorithm>
using namespace std;

string extractStringAtKey(string str,int key){
    //string tokeniser

    char *s=strtok((char *)str.c_str()," ");
        while(key>1){
            s=strtok(NULL," ");
            key--;
        }
        return(string)s;
}

//sub fxn for Int coversion

int convertToInt(string s){
    int ans=0;
    int power=1;
    for(int i=s.length()-1;i>=0;i--){
        ans+=((s[i]-'0')*power);
        power=power*10;
    }
}

//lexicoComparison

bool lexicoCompare(pair<string,string>s1,pair<string,string>s2){
    string key1,key2;
    key1=s1.second;
    key2=s2.second;
    return key1<key2;
}
// numerical Comparison
bool numericCompare(pair<string,string>s1,pair<string,string>s2){
    string key1,key2;
    key1=s1.second;
    key2=s2.second;
    return convertToInt(key1)<convertToInt(key2);
}

//rerverse
int main(){
    int n;
    cin>>n;

    cin.get(); // consume extra white space
    string temp;
    vector<string>v;

    for(int i=0;i<n;i++){
        getline(cin,temp); //includes white space
        v.push_back(temp);
    }

    int key;
    string reversal,ordering;
    cin>>key>>reversal>>ordering;
    cout<<endl;

    //step 1. extract the keys

    vector<pair<string,string>>vp;

    for(int i=0;i<n;i++){
        vp.push_back({v[i],extractStringAtKey(v[i],key)});
    }

    //step 2:sort
    if(ordering =="numeric"){
        sort(vp.begin(),vp.end(),numericCompare);
    }
    else{
        sort(vp.begin(),vp.end(),lexicoCompare);
    }

    //step 3:reverse
    if(reversal=="true"){
        reverse(vp.begin(),vp.end()) ;
       }

       //final step -output
       for(int i=0;i<n;i++){
           cout<<vp[i].first<<endl;
       }
}