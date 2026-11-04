#include <iostream>
using namespace std;
/*
Q: Program to Print the Pattern 
   * 
   * * 
   * * * 
   * * * *
*/

void TrianglePattern(int rows){
    for(int i=1; i<=rows; i++){
        for(int j=0; j<i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main() {
    int rows;
    cout<<"Enter number of Rows: "<<endl;
    cin>>rows;
    TrianglePattern(rows);
    return 0;
}