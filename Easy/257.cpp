// 257. Binary Tree Paths


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
    vector<string> res;
    void dfs(string cur, TreeNode* root)
    {
        if (!root) 
        {
            return;
        }
        if (!root->left && !root->right)
        {
            res.push_back(cur + "->" + to_string(root->val));
            return;
        }

        int val = root->val;
        dfs(cur + "->" + to_string(val), root->left);
        dfs(cur + "->" + to_string(val), root->right);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string cur = to_string(root->val);
        if (!root->left && !root->right) 
        {
            res.push_back(cur);
            return res;
        }

        dfs(cur, root->left);
        dfs(cur, root->right);

        return res;
    }
};