#include <iostream>
using namespace std;
/*
Q: Program to Print the Pattern 
   1
   2 2
   3 3 3
   4 4 4 4
*/
void SameNumTrianglePattern(int rows){
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=i; j++){
            cout<< i<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int rows;
    cout<<"Enter number of Rows: "<<endl;
    cin>>rows;
    SameNumTrianglePattern(rows);
    return 0;
}



