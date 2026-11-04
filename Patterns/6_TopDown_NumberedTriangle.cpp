#include <iostream>
using namespace std;
/*
Q: Program to Print the Pattern 
   1 2 3 4
   1 2 3
   1 2 
   1
*/
void TopdownNumberedTrianglePattern(int rows){
    for(int j=0; j<rows; j++){
        int n=1;
        for(int i=rows; i>j; i--){ // or for(int i=1; j<=n-i+1; i++)
            cout<<n<<" ";
            n++;
        }
            cout<<endl;
    }
}
int main() {
    int rows;
    cout<<"Enter number of Rows: "<<endl;
    cin>>rows;
    TopdownNumberedTrianglePattern(rows);
    return 0;
}



