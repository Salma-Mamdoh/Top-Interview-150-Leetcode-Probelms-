class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int num=(nums[0]==0 ?1 : nums[0]) ;
        int zero=(nums[0]==0 ? 1 : 0);
        for(int i=1 ; i<nums.size() ; i++){
            if(nums[i]!=0)num*=nums[i];
            else zero++;
        }
        vector<int>res(nums.size());
        for(int i=0 ; i<nums.size() ; i++){
            if(zero==0)res[i]=num/nums[i];
            else if(zero==1 && nums[i]!=0  || (zero>1))res[i]=0;
            else{
                res[i]=num;
            }
            
        }
        return res;
    }
};
