class Solution:
    def reverseBits(self, n: int) -> int:
        number : str = f"{n:032b}"
        number = number[::-1]
        return int(number,2)