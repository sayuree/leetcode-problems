# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right


class Solution:
    def postorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        self._helper(root, result)
        return result

    def _helper(self, root: TreeNode, result) -> List[int]:
        if(root == None):
            return
        self._helper(root.left, result)
        self._helper(root.right, result)
        result.append(root.val)
