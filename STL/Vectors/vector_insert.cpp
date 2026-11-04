#include <iostream>
#include <vector>
using namespace std;
int main()
{

    // Insert

    vector<int> a(2, 100); // Delcared Empty Vector
    vector<int> num = {1, 2, 3, 400};

    num.insert(num.begin(), 500);
    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i]<<" ";
    }

cout<<endl;
    vector<int> inner(2 ,50);
    // Insert a vector into another vector
    num.insert(num.begin() + 1, inner.begin() , inner.end());
// num.begin() -> here we are telling that at this address/Points to that address
    for(int i=0; i<num.size(); i++){
        cout<<num[i]<<" ";
    }


    num.clear(); //-> clears my whole vector

}