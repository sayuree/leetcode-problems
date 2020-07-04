# Runtime: 56 ms, faster than 32.46% of Python3 online submissions for Running Sum of 1d Array.
# Memory Usage: 13.8 MB, less than 100.00% of Python3 online submissions for Running Sum of 1d Array.

#Time: O(N)
#Space: O(N)


class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        if not nums:
            return []
        out = []
        out.append(nums[0])
        ind = 1
        length = len(nums)
        while ind < length:
            out.append(nums[ind] + out[ind-1])
            ind += 1
        return out
