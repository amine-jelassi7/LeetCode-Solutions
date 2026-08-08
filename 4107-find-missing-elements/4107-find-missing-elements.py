class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        missing : List[int] = []
        min_val , max_val = min(nums),max(nums)

        for i in range(min_val,max_val):
            if not(i in nums) : 
                missing.append(i)
        
        return missing