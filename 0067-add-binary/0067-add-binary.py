class Solution:
    def addBinary(self, a, b) -> str:
        #solving using a full adder 
        A, B = int(a, 2), int(b, 2)
        while B:
            A, B = A ^ B, (A & B) << 1
        return bin(A)[2:]
