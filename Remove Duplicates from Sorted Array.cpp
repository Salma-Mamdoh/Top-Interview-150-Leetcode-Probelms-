class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int n = nums.size();
        if (n <2) {
            // If the array has 0 or 1 elements,
            // no need to perform any removal, just return the original length.
            return n;
        }

        int newIndex = 1; // Index to track the current position in the updated array

        for (int i = 1; i < n; i++) {
            // Compare the current element with the element one positions back
            if (nums[i] != nums[newIndex - 1]) {
                nums[newIndex] = nums[i];
                newIndex++;
            }
        }

        return newIndex; // Return the length of the updated array
    }
};
