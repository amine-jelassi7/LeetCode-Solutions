class Solution:
    def climbStairs(self , n: int) -> int:
        if n <= 2:
            return n
        
        one_step_behind : int = 2
        two_steps_behind : int = 1
        current : int = 0
        
        for i in range(3, n + 1):
            current = one_step_behind + two_steps_behind
            two_steps_behind = one_step_behind
            one_step_behind = current
        
        return current
        