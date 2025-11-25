#include <iostream>
using namespace std;
int main() {
    int size;
    int arr[100];
    cout<<"enter the size of an array:";
    cin>>size;
    cout<<"enter an array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
        
    }
    for(int i=0;i<size;i++){
        if((arr[i-1]!=arr[i])&&(arr[i]!=arr[i+1])){
            cout<<arr[i];
        }
    }
    return 0;
}