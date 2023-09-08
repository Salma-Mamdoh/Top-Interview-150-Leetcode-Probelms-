class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mm;
        int n=nums.size();
        for(int i=0 ; i<n ; i++)
        {
            mm[nums[i]]++;
        }
        int ans=0;
        for(auto& i: mm){
            if(i.second>n/2){
                ans=i.first;
                break;
            }
        }
        return ans;
    }
};
