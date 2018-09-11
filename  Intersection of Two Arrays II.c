/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int comparing(const void* a, const void* b){
    return *(int *)a > *(int *)b;  //升序排序
    //return *(int *)b < *(int *)a; //降序排序
}

int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    qsort(nums1,nums1Size,sizeof(int),comparing);
    qsort(nums2,nums2Size,sizeof(int),comparing);
    *returnSize = 0;
    int* returns = malloc(nums1Size*sizeof(int));
    for(int i=0,j=0;i<nums1Size && j<nums2Size;){
        if(nums1[i] == nums2[j]){
            returns[(*returnSize)++]=nums1[i];
            i++;
            j++;
        }
        else if(nums1[i]<nums2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return realloc(returns,(*returnSize)*sizeof(int));
}
