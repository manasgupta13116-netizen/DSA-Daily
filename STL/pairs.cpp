#include <iostream>
using namespace std;
int main() {
    // If we have to store two data of may be same datatype or different then we can use pairs -> main aim is to store data of different datatypes at a single variable

    pair<int , int> p = {1,2};
    cout<<p.first << p.second <<endl;

    // Storing different datatype in a pair
    pair<int , char> a = {1 , 'm'};
    cout<<a.first<<endl;
    cout<<a.second<<endl;
    
    // Storing More than 2 values using pair
    // pair<int , pair<int, int>> c = {1,{2,3}};
    // cout<<c.first<< c.second.first << c.second.second;

    // array as a pair
    pair<int , int> arr[] = {{2,9}, {1,3}, {0,7} , {0,6}};
                // Indexes     0      1      2       3
    cout<< arr[0].first<< arr[0].second<< endl;
    cout<< arr[1].first<< arr[1].second<< endl;
    cout<< arr[2].first<< arr[2].second<< endl;
    cout<< arr[3].first<< arr[3].second<< endl;
    return 0; 

}