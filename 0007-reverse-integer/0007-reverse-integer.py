class Solution:
    def reverse(self, x: int) -> int:
        num : int = int(str(abs(x))[::-1])
        if (num > -1 + (2**31)) or (num<-(2**31)):
            return 0
        if x>0 : 
            return num
        else: 
            return -num