# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def minDistance(self, root, ans):
        if root is None:
            return

        self.minDistance(root.left, ans)

        if self.prev is not None:
            ans[0] = min(ans[0], root.val - self.prev)

        self.prev = root.val

        self.minDistance(root.right, ans)

    def minDiffInBST(self, root: TreeNode | None) -> int:
        ans = [float('inf')]
        self.prev = None

        self.minDistance(root, ans)

        return ans[0]
