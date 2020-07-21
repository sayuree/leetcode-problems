# Runtime: 64 ms, faster than 12.63% of Python3 online submissions for Kids With the Greatest Number of Candies.
# Memory Usage: 13.8 MB, less than 62.67% of Python3 online submissions for Kids With the Greatest Number of Candies.

#Time: O(N)
#Space: O(N)


class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        # Base Case
        if not candies:
            return []
        if len(candies) == 1:
            return [True]
        # Finding a kid with the greatest number of candies
        max_cand = 0
        result = []
        length = len(candies)
        for i in range(length):
            max_cand = max(max_cand, candies[i])
        # Checking which kid can have the greatest #of candies
        for i in range(length):
            if candies[i]+extraCandies >= max_cand:
                result.append(True)
            else:
                result.append(False)
        return result
