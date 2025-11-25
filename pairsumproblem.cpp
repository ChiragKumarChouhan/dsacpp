#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum(vector<int>nums,int target){
    vector <int> ans;
    int n = nums.size();
    for(int i=0;i<n;i++){ // for picking one number
        for(int j =i+1;j<n;j++){ // for picking pair number 
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int>ans = pairsum(nums,target);
    cout<<ans[0]<<" ,"<<ans[1]<<endl;
    return 0;
}

// more optimal solution

#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum(vector<int>nums,int target){
    vector <int> ans;
    int n = nums.size();

    int i = 0;
    int j = n-1;

    while(i<j){
        int sum =nums[i] + nums[j];
        if(sum < target){
            i++;  
    } else if (sum>target){
        j--;

    }else {
    return {i, j}; 
    }

}
return ans; 
}

    int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int>ans = pairsum(nums,target);
    cout<<ans[0]<<" ,"<<ans[1]<<endl;
    return 0;
}