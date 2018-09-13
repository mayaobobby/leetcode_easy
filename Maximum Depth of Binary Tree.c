/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isValidBST(struct TreeNode* root) {
    bool a = true;
    if(root == NULL||(root&&root->right== NULL&&root->left == NULL)){
        return true;
    }
    if(root&&root->left&&root->right){
        if(root->left->val < root->val && root->right->val > root->val){
            a = true;
            bool left = isValidBST(root->left);
            bool rigth = isValidBST(root->right);
        }
        else{
            return false;
        }
    }
    else if(root&&root->left&&root->right == NULL){
        if(root->left->val < root->val){
            a = true;
            bool left = isValidBST(root->left);
        }
        else{
            return false;
        }
    }
    else if(root&&root->right&&root->left == NULL){
        if(root->right->val > root->val){
            a = true;
            bool right = isValidBST(root->right);
        }
        else{
            return false;
        }
    }
    else{
        a = false;
    }
    return a;
}
