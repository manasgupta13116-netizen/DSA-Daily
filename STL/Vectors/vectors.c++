#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); // another way to insert into a vector
    // cout<<v.back(); // access the last element of the vector 

//Method 1 to print the vector
    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }

// Method 2(using iterator) - iterator points to the address of the element
    vector<int>::iterator it; // defining the iterator 
    // v.begin -> points to start | v.end -> points to end of the vector
    // for(it = v.begin(); it!=v.end(); ++it){
    //     cout<< *it << " ";
    // } 
//  v.begin() -> point to the address of the first element of the vector
    cout<<endl;

    // for(auto it : v){
    //     cout<< it <<endl;
    // }

// Deleting an element in a Vector

v.erase(v.begin()); 
         // |
// address of element to be deleted inserted ()

for(it = v.begin(); it != v.end(); ++it){
    cout<< *it<< " ";
}
}
