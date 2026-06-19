class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        while(s[len(s)-1]==" "):
            s=s[:-1]
        l : int = s.rfind(" ")
        return len(s)-l-1