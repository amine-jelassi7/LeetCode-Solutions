class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        rank : set[int] = {}

        for i, num in enumerate(sorted(set(arr)), 1):
            rank[num] = i

        return [rank[num] for num in arr]