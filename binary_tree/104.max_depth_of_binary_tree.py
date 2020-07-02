class Solution:
    def maxDepth(self, root: TreeNode) -> int:
        if root == None:
            return 0
        else:
            left_d = self.maxDepth(root.left)
            right_d = self.maxDepth(root.right)
            return max(left_d, right_d)+1
