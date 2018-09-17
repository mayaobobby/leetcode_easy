int maxSubArray(int* nums, int numsSize) {
    int sum = 0;
    if(numsSize == 0){
        return sum;
    }
    else{
        int a=nums[0];
        sum = a;
        for(int i=1;i<numsSize;i++){
            if(a>0){
                a = a+nums[i];
            }
            else{
                a = nums[i];
            }
            if(a>sum){
                sum = a;
            }
        }
    }
    return sum;
}
