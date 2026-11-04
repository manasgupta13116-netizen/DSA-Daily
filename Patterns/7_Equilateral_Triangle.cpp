#include <iostream>
using namespace std;
/*
Q: Program to Print the Pattern 
       *
     * * *
   * * * * *
 * * * * * * *
*/
void EquilateralTrianglePattern(int rows){
    for(int i=0; i<rows; i++){
        // Space
        for(int j = 0; j<rows-i-1; j++){
            cout<<" "; 
        }
        // Star
        for(int k=0; k<(2*i) + 1; k++){
            cout<<"*"; 
        }
        cout<<endl;
}
}
// how id tackled this problem --> just saw the connection between the row no. & on that row ho wmany space i have to print and how many start 
 
// Note: just see in these type of qs what happens in first line from that you will understadn how many loops to run and where to run also --> Relate it with the rows like for what value of rows how much star or space is prinitng then derrive a formula for this
int main() {
    int rows;
    cout<<"Enter number of Rows: "<<endl;
    cin>>rows;
    EquilateralTrianglePattern(rows);
    return 0;
}



