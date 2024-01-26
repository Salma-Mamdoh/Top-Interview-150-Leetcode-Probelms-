class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        string lis = "";
        vector<int> ans;
        
        if (nums.empty()) {
            return res;
        }
        
        ans.push_back(nums[0]);
        
        for (int i = 1; i < nums.size(); i++) {
            if (ans.back()+1 == nums[i]) {
                ans.push_back(nums[i]);
            } else {
                if (ans.size() > 1) {
                    lis += to_string(ans[0]) + "->" + to_string(ans.back());
                } else {
                    lis += to_string(ans.back());
                }
                
                res.push_back(lis);
                lis = "";
                ans.clear();
                
                ans.push_back(nums[i]); // start a new range
            }
        }
        
        // Handle the last range
        if (ans.size() > 1) {
            lis += to_string(ans[0]) + "->" + to_string(ans.back());
        } else {
            lis += to_string(ans.back());
        }
        
        res.push_back(lis);
        
        return res;
    }
};
