# Runtime: 108 ms, faster than 32.63 % of Python3 online submissions for Remove Duplicates from Sorted Array.
# Memory Usage: 15.4 MB, less than 93.58 % of Python3 online submissions for Remove Duplicates from Sorted Array.

#Time: O(N)
#Space: O(1)


class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if not nums:
            return 0
        start = 0
        end = start+1
        size = len(nums)
        while end < size:
            if nums[start] == nums[end]:
                nums.pop(end)
                size -= 1
            elif nums[start] != nums[end]:
                start = end
                end = start+1
        return size
