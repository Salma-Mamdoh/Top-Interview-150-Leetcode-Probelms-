class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, vector<int>> mm;
        for (int i = 0; i < nums.size(); i++) {
            if (mm.find(nums[i]) == mm.end()) {
                mm[nums[i]].push_back(i);
            } 
            // Check if the size of the vector associated with nums[i] is greater than 1
            else if (i - mm[nums[i]].back() <= k) {
                    return true;
            }
            else {
                mm[nums[i]].push_back(i);  // Corrected this line
            }
        }
        return false;
    }
};
