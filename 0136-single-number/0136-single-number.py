class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        xor : int = 0
        for num in nums:
            xor ^= num
        
        return xor
