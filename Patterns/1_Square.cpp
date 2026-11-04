#include <iostream>
using namespace std;
/*
Q: Program to Print the Pattern 
   * * * *
   * * * *
   * * * *
   * * * *
*/

void SquarePattern(int rows){
    for(int i=0; i<rows; i++){
        for(int i=0; i<rows; i++){
            cout<<"* "; 
        }
        cout<<"\n";
    }
}
int main() {
    int rows;
    cout<<"Enter number of Rows: "<<endl;
    cin>>rows;
    SquarePattern(rows);
    return 0;
}