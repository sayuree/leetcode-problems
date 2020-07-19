# Runtime: 48 ms, faster than 26.55% of Python3 online submissions for Rotate Image.
# Memory Usage: 14 MB, less than 11.02% of Python3 online submissions for Rotate Image.

#Time: O(N^2)
#Space: O(1)


class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        # Base Case
        if not matrix:
            return
        # Transposing the matrix
        for row in range(len(matrix)):
            col = row+1
            while col < len(matrix):
                temp = matrix[row][col]
                matrix[row][col] = matrix[col][row]
                matrix[col][row] = temp
                col += 1
        # Reversing the columns of matrix to get rotated image
        for row in range(len(matrix)):
            start = 0
            end = len(matrix)-1
            while start < end:
                matrix[row][start], matrix[row][end] = matrix[row][end], matrix[row][start]
                start += 1
                end -= 1
