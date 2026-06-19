class Solution:
    def getPermutation(self, n: int, k: int) -> str:
        s=""
        x=""
        for i in range(1,n+1):
            s+=str(i)
        for i in range(1,n):
            d=math.ceil(k/math.factorial(n-i))
            if d>len(s):
                d=d%len(s)
                if d==0:
                    d=len(s)
            x+=s[d-1]
            s=s.replace(s[d-1],"")
        return x+s