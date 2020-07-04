# Runtime: 508 ms, faster than 5.07% of Python3 online submissions for Array Partition I.
# Memory Usage: 16.2 MB, less than 84.31% of Python3 online submissions for Array Partition I.

#Time: O(NlogN)
#Space: O(1)


class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        if not nums:
            return 0
        nums.sort()
        cum_sum = 0
        ind = 0
        length = len(nums)
        while ind < length:
            cum_sum += min(nums[ind], nums[ind+1])
            ind += 2
        return cum_sum
