# Runtime: 60 ms, faster than 7.54 % of Python3 online submissions for Remove Element.
# Memory Usage: 14.1 MB, less than 5.34 % of Python3 online submissions for Remove Element.

#Time: O(N)
#Space: O(1)


class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        if not nums:
            return 0
        index = 0
        length = len(nums)
        while index < length:
            if nums[index] == val:
                nums.pop(index)
                length -= 1
            else:
                index += 1
        return length
