

//brute force aproach
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        set<vector<int>> s; // used to store an uniqe pair

        for(int i=0;i<n;i++)[
            int tar=-nums[i];
            for(int j=i+1;j<n;j++){
                set<int>s1;
                int third=tar-nums[j];
                if(s1.find[third]!=s1.end()){
                    vector<int>trip={nums[i],nums[j],third};
                    sort(s1.begin(),s1.end());
                    s.insert(trip);
                    ans.push_back(trip);
                }
            }
        ]
        return ans;
    }
};



//optimised aproach


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;


        for(int i=0;i<n;i++){
            if(i>0&&nums[i]=nums[i-1]) continue;
            j=i+1,k=n-1;
            while(j<k){
                sum=nums[i]+nums[j]+nums[k];
                if(sum>0){
                    k--;

                }else if(sum<0){
                   j++;

                }else{
                    ans.push_back{nums[i],nums[j],nums[k]};
                    j--,k++;
                }
            }
        }
        return ans;
    }
};

//4 sum

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
      int n=nums.size();
       vector<vector<int>> ans;
      sort(nums.begin(),nums.end());
      if(i>0&&nums[i]==nums[i-i])continue;
      if(j>0&&nums[]==nums[j-1])
      for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int p=j+1,q=n-1;
            while(p<q){
              long long sum=(long long )nums[i]+(long long )nums[j]+(long long )nums[p]+(long long )nums[q];
                if(sum>target){
                    q--;
                }else if(sum<target){
                    p++;
                }else{
ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                    p++,q--;
                }
            }
        }
      }
      return ans;
    }
};
