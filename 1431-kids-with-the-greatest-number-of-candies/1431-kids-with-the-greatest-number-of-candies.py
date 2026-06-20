class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        res = []
        sup = max(candies)
        for num in candies :
            if num+extraCandies >= sup : 
                res.append(True)
            else : 
                res.append(False)

        return res