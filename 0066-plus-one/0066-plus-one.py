class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        number : int = 0
        for digit in digits :
            number = (number*10)+ digit

        number+=1

        return [int(num) for num in str(number)] 