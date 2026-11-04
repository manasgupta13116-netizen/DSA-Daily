#include <iostream>
using namespace std;
/*
Q: Program to Print the Pattern 

 * * * * * * *
   * * * * * 
    * * * 
      *
*/
void pattern(int rows){
    for(int i=0; i<rows; i++){
        //Space
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        
        for(int j=0; j<2*rows - (2*i+1); j++){
            cout<<"*";
        }

        for(int j=0; j<i; j++){
            cout<<" ";
        }

        cout<<endl;
    }
}

int main() {
    int rows;
    cout<<"Enter number of Rows: "<<endl;
    cin>>rows;
    pattern(rows);
    return 0;
}



