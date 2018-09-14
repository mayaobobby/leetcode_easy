/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/*

*/
bool isValidBST(struct TreeNode* root) {
    struct TreeNode* next = NULL;
    if(root == NULL){
        return true;
    }
    if(root->left != NULL){
        next = root->left;
        while(next->right != NULL){
            next = next->right;
        }
        if(next->val>=root->val){
            return false;
        }
    }
    if(root->right != NULL){
        next = root->right;
        while(next->left != NULL){
            next = next->left;
        }
        if(next->val<=root->val){
            return false;
        }
    }
    if(isValidBST(root->left) == false){
        return false;
    }
    if(isValidBST(root->right) ==false){
        return false;
    }
    return true;
}


