class Solution:
    def rangeBitwiseAnd(self, left: int, right: int) -> int:
        shifit=0
        while left<right:
            left >>=1
            right >>=1
            shifit+=1
            
        return right << shifit
