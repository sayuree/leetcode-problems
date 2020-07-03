class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        if not nums:
            return []

        index = 0
        length = len(nums)
        while index < length:
            if nums[index] == 0:
                nums.append(nums.pop(index))
                length -= 1
            else:
                index += 1
