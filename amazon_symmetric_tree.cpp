class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return ismirror(root,root);
    }
    bool ismirror(TreeNode* t1,TreeNode* t2)
    {
        if(t1==NULL && t2==NULL)
        {
            return true;
        }
        if(t1==NULL || t2==NULL)
        {
            return false;
        }
        return (t1->val==t2->val) && ismirror(t1->left,t2->right) && ismirror(t1->right,t2->left);
    }
};
