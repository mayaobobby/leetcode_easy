/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *columnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

//NOT by myself

int Maxdepth(struct TreeNode* root){
    int final_depth = 0, left_depth = 0, right_depth = 0;
    if(root == NULL){
        return final_depth;
    }
    left_depth = Maxdepth(root->left);
    right_depth = Maxdepth(root->right);
    final_depth = (left_depth>=right_depth)?left_depth+1:right_depth+1;
    return final_depth;
}

void Addarray(int** array, int size){
    int* temp = *array;
    *array = (int*)calloc(size+1, sizeof(int));
    for(int i=0;i<size;i++){
        (*array)[i]=temp[i];
    }
    free(temp);
}


void InOrder (struct TreeNode* root, int** array, int* nums, int depth)
{
    if (root == NULL){
        return;
    }
    InOrder (root->left, array, nums, depth + 1);
    Addarray (&array[depth], nums[depth]);
    array[depth][nums[depth]++] = root->val;
    InOrder (root->right, array, nums, depth + 1);
}


int** levelOrder(struct TreeNode* root, int** columnSizes, int* returnSize) {
    int depth = *returnSize= Maxdepth(root);
    int** array = (int**)calloc(depth,sizeof(int*));
    *columnSizes = (int*)calloc(depth,sizeof(int));
    InOrder (root, array, *columnSizes, 0);
    return array;
}


