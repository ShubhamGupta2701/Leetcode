// 106. Construct Binary Tree from Inorder and Postorder Traversal


class Solution {
public:
    TreeNode* buildsTree(vector<int> &inorder,int is,int ie,vector<int> &postorder , int ps, int pe,map<int,int> &inmap){
        if(ps>pe || is>ie) return NULL;

        TreeNode* root = new TreeNode(postorder[pe]);

        int inroot = inmap[postorder[pe]];
        int numsleft = inroot - is;

        root->left = buildsTree(inorder , is , inroot-1 , postorder, ps, ps+numsleft-1,inmap);

        root->right = buildsTree(inorder , inroot+1 , ie , postorder, ps+numsleft, pe-1,inmap);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size() != postorder.size()) return NULL;
         map<int ,int> inmap;
        for(int i = 0; i<inorder.size();i++){
            inmap[inorder[i]] = i;
        }
        return buildsTree(inorder,0,inorder.size()-1,
        postorder,0,postorder.size()-1,inmap);
    }
};