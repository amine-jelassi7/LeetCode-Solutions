class Solution:
    def decode(self, encoded: List[int], first: int) -> List[int]:
        r : List[int]= [first]
        for i in encoded:
            r.append(r[-1]^i)
        return r