/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    bool isleaf(TreeNode* root)
    {
        if(root == NULL)
            return false;

        return root->left == NULL && root->right == NULL;
    }

    int sumOfLeftLeaves(TreeNode* root) {

        if(root == NULL)
            return 0;

        int sum = 0;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            TreeNode* temp = q.front();
            q.pop();

            if(temp->left != NULL)
            {
                if(isleaf(temp->left))
                    sum += temp->left->val;
                else
                    q.push(temp->left);
            }

            if(temp->right != NULL)
            {
                q.push(temp->right);
            }
        }

        return sum;
    }
};