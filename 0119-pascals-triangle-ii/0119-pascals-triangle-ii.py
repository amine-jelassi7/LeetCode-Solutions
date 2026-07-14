class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        ans : List[int] = [1]*(rowIndex+1)
        a : int = rowIndex
        b : int = 1
        for i in range(1, rowIndex):
            ans[i] = ans[i-1]*a//b
            a = a - 1
            b = b + 1
        return ans