# Runtime: 204 ms, faster than 8.17% of Python3 online submissions for Contains Duplicate.
# Memory Usage: 19.3 MB, less than 38.17% of Python3 online submissions for Contains Duplicate.


class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        if not nums:
            return False
        my_set = set()
        for item in nums:
            my_set.add(item)
        return len(my_set) != len(nums)


class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        if not nums:
            return False
        return len(nums) != len(set(nums))
