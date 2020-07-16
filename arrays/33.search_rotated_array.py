# Runtime: 56 ms, faster than 26.54% of Python3 online submissions for Search in Rotated Sorted Array.
# Memory Usage: 14 MB, less than 71.67% of Python3 online submissions for Search in Rotated Sorted Array.

# Time: O(logN)
# Space: O(1)


class Solution:
    def search(self, nums: List[int], target: int) -> int:
        # checking base case
        if not nums:
            return -1
        left = 0
        right = len(nums)-1
        # finding the pivot element
        while left < right:
            mid = (right+left)//2
            if nums[mid] > nums[right]:
                left = mid+1
            else:
                right = mid
        # choosing left/right subarray
        pivot = left
        left = 0
        right = len(nums)-1
        if nums[pivot] <= target and target <= nums[right]:
            left = pivot
        else:
            right = pivot
        # finding the target in rotated sorted array(simple iterated binary search)
        while left <= right:
            mid = (right+left)//2
            if nums[mid] == target:
                return mid
            if nums[mid] < target:
                left = mid+1
            else:
                right = mid-1
        return -1
