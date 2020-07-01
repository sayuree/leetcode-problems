# Runtime: 112 ms, faster than 29.70% of Python3 online submissions for Single Number.
# Memory Usage: 16.2 MB, less than 89.78% of Python3 online submissions for Single Number.


class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        my_map = {}
        for item in nums:
            if item in my_map:
                my_map[item] += 1
            else:
                my_map[item] = 1

        res = 0
        for key in my_map:
            if my_map[key] == 1:
                res = key
                break
        return res
# Improved code using min() function that can be applied to iterable

# Runtime: 92 ms, faster than 53.40% of Python3 online submissions for Single Number.
# Memory Usage: 16.2 MB, less than 72.94% of Python3 online submissions for Single Number.


class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        my_map = {}
        for item in nums:
            if item in my_map:
                my_map[item] += 1
            else:
                my_map[item] = 1

        return min(my_map, key=my_map.get)
