class Solution {
public:
    void getpermutation(vector<int>& arr, int idx, vector<vector<int>>& ans) {
        if (idx == arr.size()) {
            ans.push_back(arr);
            return;
        }
        for (int i = idx; i < arr.size(); i++) {
            swap(arr[idx], arr[i]);
            getpermutation(arr, idx + 1, ans);
            swap(arr[idx], arr[i]);// for backtraking 
        }
    }

    vector<vector<int>> permute(vector<int>& arr) {
        vector<vector<int>> ans;
        getpermutation(arr, 0, ans);
        return ans;
    }
};
