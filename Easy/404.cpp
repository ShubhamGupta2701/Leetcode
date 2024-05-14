// 404. Sum of Left leaves

class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if (!root) return  0;
        int sum=0;
        vector<pair<TreeNode*, bool>> stack={{root, 0}};
        while(!stack.empty()){
            auto [Node, isLeft]=stack.back();
            stack.pop_back();
            if (!Node->left && !Node->right && isLeft) sum+=Node->val;
            else{
                if (Node->right)stack.emplace_back(Node->right, 0);
                if (Node->left) stack.emplace_back(Node->left, 1);
            }
        }
        return sum;
    }
};