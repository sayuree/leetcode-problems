# Runtime: 1572 ms, faster than 28.17% of Python3 online submissions for 3Sum.
# Memory Usage: 16.6 MB, less than 97.74% of Python3 online submissions for 3Sum.

#Time: O(N^2)
#Space: O(1)


class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        # Base Cases
        if not nums:
            return []
        if len(nums) < 3:
            return []
        if len(nums) == 3:
            if sum(nums) == 0:
                return [nums]
            else:
                return []
        res = set()
        # Sorting the array for using 2-pointers technique conveniently
        nums.sort()
        # The underlying logic
        i = 0
        for i in range(len(nums)-2):
            j = i+1
            k = len(nums)-1
            if i > 0 and nums[i] == nums[i-1]:
                continue
            while j < k:
                triple_sum = nums[i]+nums[j]+nums[k]
                if triple_sum > 0:
                    k -= 1
                elif triple_sum < 0:
                    j += 1
                else:
                    res.add((nums[i], nums[j], nums[k]))
                    j += 1
                    k -= 1

        return list(res)
