class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        allowed = set(allowed)
        res : int =0 
        for word in words : 
            for letter in word:
                if letter not in allowed  : 
                    res +=1
                    break

        return len(words)-res