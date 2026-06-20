class Solution:
    def solve(self, ans, n, temp) -> None:
        if len(temp) == n:
            ans.append(temp)
            return

        if not temp or temp[-1] != '0':
            self.solve(ans, n, temp + "0")

        self.solve(ans, n, temp + "1")

    def validStrings(self, n: int) -> List[str]:
        ans : List[str] = []
        self.solve(ans, n, "")
        return ans