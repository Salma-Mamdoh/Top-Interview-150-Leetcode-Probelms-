class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x<0:
            return False
        else:
            num=str(x)
            i=0
            j=len(num)-1
            while i<j:
                if num[i]==num[j]:
                    i+=1
                    j-=1
                else:
                    return False
            return True
        
        # great solution return num==num[::-1]
