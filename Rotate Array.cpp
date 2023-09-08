class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Ensure k is within the range of the array size
        if (k > 0) {
            vector<int> rotated(nums.begin() + n - k, nums.end()); // Elements to be moved to the front
            nums.insert(nums.begin(), rotated.begin(), rotated.end()); // Insert at the beginning
            nums.erase(nums.end() - k, nums.end()); // Remove the duplicated elements from the end
        }
    }
};
