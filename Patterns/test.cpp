#include<iostream>
using namespace std;
int binarySearch(int arr[], int n , int key){
    long long s = 0;
    long long e = n-1;
    
    while(s <= e){
        int mid = (s + e)/2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] > key){
            e = mid - 1;
        }else if(arr[mid] < key){
            s =  mid + 1;
        }
}
    return -1;
}
int main() {
    long long n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    long long key;
    cin>>key;
    
    cout<<binarySearch(arr, n , key)<<endl;
    return 0;   
}