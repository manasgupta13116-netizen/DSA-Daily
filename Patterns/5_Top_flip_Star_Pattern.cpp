#include <iostream>
using namespace std;
/*
Q: Program to Print the Pattern 
   * * * * 
   * * *
   * *
   * 
*/
void TopdownTrianglePattern(int rows){
    for(int j=0; j<rows; j++){
        for(int i=rows; i>j; i--){
            cout<<"*_";
        }
            cout<<endl;
    }
}


int main() {
    int rows;
    cout<<"Enter number of Rows: "<<endl;
    cin>>rows;
    TopdownTrianglePattern(rows);
    return 0;
}



