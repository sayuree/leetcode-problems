# Runtime: 140 ms, faster than 40.98% of Python3 online submissions for Container With Most Water.
# Memory Usage: 15.4 MB, less than 38.11% of Python3 online submissions for Container With Most Water.

#Time: O(N)
#Space: O(1)


class Solution:
    def maxArea(self, height: List[int]) -> int:
        if(len(height) == 2):
            return min(height[0], height[1])
        start = 0
        end = len(height)-1
        max_area = 0
        while start < end:
            start_area = height[start]*(end-start)
            end_area = height[end]*(end-start)
            max_area = max(
                min(height[start], height[end])*(end-start), max_area)
            if start_area < end_area:
                start += 1
            else:
                end -= 1
        return max_area
