//brute force aproach

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={1,2,3,4,5,6,7};
    int n=arr.size();
    int inversecount=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
         if(i<j&&arr[i]>arr[j]){
            inversecount++;
         }
        }
        
    }cout<<inversecount<<endl;
    return 0;
}

//optimal aproach 
