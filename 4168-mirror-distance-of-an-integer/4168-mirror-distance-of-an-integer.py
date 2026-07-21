class Solution:
    def mirrorDistance(self, n: int) -> int:
        reversed_n : int = int(str(n)[::-1])
        return abs(n-reversed_n)