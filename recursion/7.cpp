//print subset of a set

#include<iostream>
#include<vector>
using namespace std;

void ps(vector<int> &arr,vector<int> &ans,int i){ // represent by refrence becuase we not want to creat a copy we have to made a change on actual value
    if(i==arr.size()){
        for(int val:ans){
            cout<<val;
        }
        cout<<endl;
        return;
    }

    //include
    ans.push_back(arr[i]);
    ps(arr,ans,i+1);

    //exculde
    ans.pop_back();//backtrack
    ps(arr,ans,i+1);

}

int main(){
    vector<int>arr={1,2,3};
    vector<int>ans;//store subset
    ps(arr,ans,0);//use this becuase of void 
return 0;
}
