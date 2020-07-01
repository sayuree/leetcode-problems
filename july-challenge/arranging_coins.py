class Solution:
    def arrangeCoins(self, n: int) -> int:
        count = 1
        stair = 0
        if(n == 1):
            return 1
        while n > 0:
            if(n-count >= 0):
                n -= count
                count += 1
                stair += 1
            else:
                break
        return stair
