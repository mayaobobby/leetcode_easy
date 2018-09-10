void rotate(int* nums, int numsSize, int k) {
    k = k%numsSize;
    int * a = malloc(sizeof(int)*numsSize);
    memcpy(a, nums + numsSize -k, sizeof(int)*k);
    memcpy(a+k,nums,sizeof(int)*(numsSize-k));
    memcpy(nums,a,sizeof(int)*numsSize);
}
