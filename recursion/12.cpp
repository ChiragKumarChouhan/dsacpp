// combination sum
class Solution
{
public:
    set<vector<int>> s; // for unique solution

    void comsum(vector<int> &arr, int i, vector<int> &combination,
                vector<vector<int>> &ans, int target)
    {
        // base condition
        if (i == arr.size() || target < 0)
        {
            return;
        }
        if (target == 0)
        {
            if (s.find(combination) == s.end())
            {
                ans.push_back({combination});
                s.insert(combination);
            }
            return;
        }

        combination.push_back(arr[i]);   // inclusion

        comsum(arr, i + 1, combination, ans,
               target - arr[i]);                           // single inclusion
        comsum(arr, i, combination, ans, target - arr[i]); // multiple inclusion
        combination.pop_back();                            // backtracking
        comsum(arr, i + 1, combination, ans, target);
    }

    vector<vector<int>> combinationSum(vector<int> &arr, int target)
    {
        vector<vector<int>> ans;
        vector<int> combination;
        comsum(arr, 0, combination, ans, target);
        return ans;
    }
};
