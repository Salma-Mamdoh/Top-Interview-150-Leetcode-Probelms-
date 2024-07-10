class Solution {
public:
    int trap(vector<int>& height) 
    {
        int left=0,right=0,leftmax=0,rightmax=0,res=0,l=0;
        l=height.size();
        right=l-1;
        while(left<=right)
        {
            if(height[left]<=height[right])
            {
                if(height[left]>=leftmax)
                {
                    leftmax=height[left];
                }
                else
                {
                    res=res+leftmax-height[left];
                }
                left++;
            }
            else
            {
                if(height[right]>=rightmax)
                {
                    rightmax=height[right];
                }
                else
                {
                    res=res+rightmax-height[right];
                }
                right--;
            }
        }
        return res;
        
    }
};
