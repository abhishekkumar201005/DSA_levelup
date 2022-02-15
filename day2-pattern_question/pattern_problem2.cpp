#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    /*
pattern-9
1
2 3
3 4 5  
4 5 6 7 
*/
// while(row<=n){
//         int col=1;
//         //int val=row;
//         while(col<=row){
//             //cout<<val<<" "; 
//             cout<<row+col-1 <<" ";
//             //val=val+1;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
       /*
pattern-10
1
2 1
3 2 1
4 3 2 1 
*/
while(row<=n){
        int col=1;
        //int val=row;
        while(col<=row){
            //cout<<val<<" ";
          //  val=val-1;
          cout<<row-col+1<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
return 0;
}