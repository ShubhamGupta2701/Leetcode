// 111. Minimum depth of binary tree

class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL) return 1;
        int l=INT_MAX,r=INT_MAX;
        if(root->left)
            l=minDepth(root->left);
        if(root->right)
            r=minDepth(root->right);
        return 1+(min(l,r));
    }
};