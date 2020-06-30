# Runtime: 240 ms, faster than 8.07% of Python3 online submissions for Majority Element.
# Memory Usage: 15.2 MB, less than 51.17% of Python3 online submissions for Majority Element.


class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        my_map = {}
        output = 0

        if nums == None:
            return null

        for item in nums:
            if item in my_map:
                my_map[item] += 1
            else:
                my_map[item] = 1

        for key in my_map:
            if my_map[key] > len(nums)//2:
                output = key

        return output
