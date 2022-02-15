#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    
/* patern-1
****
****
****
****
**** 
*/
// while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<"*"<<" ";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }

/* pattern -2
1 1 1
2 2 2
3 3 3
*/
// while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<i<<" "; 
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }

/* pattern -3
1 2 3
1 2 3
1 2 3
*/
// while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<j<<" "; 
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }

/* pattern -4
3 2 1
3 2 1
3 2 1
*/

// while(i<=n){
//         int j=n;
//         while(j>=1){
//             cout<<j<<" "; 
//             j=j-1;
//         }
//         cout<<endl;
//         i=i+1;
//     }

//or 
// while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<n-j+1<<" "; 
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
/* pattern -5
1 2 3
4 5 6
7 8 9
*/
// int count=1;
// while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<count<<" "; 
//             count=count + 1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
/* pattern -6
*
* *
* * *
* * * *
*/
// while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<"*"<<" ";  
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
/*
pattern-7
1
2 2
3 3 3
4 4 4 4
*/
// while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<< i <<" ";  
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }

/*
pattern-8
1
2 3
4 5 6 
7 8 9 10
*/
//     int count=1;
// while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<count<<" "; 
//             count=count + 1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }

    /*
pattern-9
1
2 3
3 4 5  
4 5 6 7 
*/
while(i<=n){
        int j=1;
        int val=i;
        while(j<=i){
            cout<<val<<" "; 
            val=val+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
return 0;
}

 