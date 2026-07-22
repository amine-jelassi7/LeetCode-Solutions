class Solution:
    def digitFrequencyScore(self, n: int) -> int:
        num : str = str(n)
        res : int = 0
        for i in num :
            res+= int(i)

        return res