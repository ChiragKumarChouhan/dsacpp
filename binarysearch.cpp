#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>arr,int tar){
    int st=0,end=arr.size();
    while(st<=end){
        int mid=st+(end-st)/2;// need an optimasation for worst case condition
        if(tar>arr[mid]){
            st=mid+1;

        }else if(tar<arr[mid]){
            end=mid-1;

        }else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int>arr1={1,2,3,4,5,6,12};
    int tar1=12;
    cout<<binarySearch(arr1,tar1)<<endl;
    vector<int>arr2={-2,-1,0,1,2,3,4,5,6,7,8};
    int tar2=0;
    cout<<binarySearch(arr2,tar2)<<endl;
}