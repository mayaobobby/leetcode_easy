/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
//recursively递归
bool isSymmetricRec(struct TreeNode* left, struct TreeNode* right) {
    if(!left&&!right){
        return true;
    }
    if(!left||!right){
        return false;
    }
    if(left->val != right->val){
        return false;
    }
    bool outter = isSymmetricRec(left->left,right->right);
    bool inner = isSymmetricRec(left->right, right->left);
    return (outter&&inner);
}

bool isSymmetric(struct TreeNode* root){
    if(root == NULL){
        return true;
    }
    return isSymmetricRec(root->left, root->right);
}
//iteratively迭代
bool isSymmetric(struct TreeNode* root){
    if(root == NULL){
        return true;
    }
    if()
}
