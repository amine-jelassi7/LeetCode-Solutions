class Solution:
    def mySqrt(self, x: int) -> int:
        i=0
        for i in range(x+1) : 
            if i*i == x :
                return i
            elif i*i >x :
                break

        if i-1 >=0 :
            return i-1
        else :
            return 0