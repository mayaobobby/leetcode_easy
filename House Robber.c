int rob(int* nums, int numsSize) {
    int max=0;
    int a=0,b=0;
    for(int i=0;i<numsSize;i++){
        if(i%2==0){
            a=(a+nums[i]>b)?a+nums[i]:b;
        }
        else{
            b=(a>b+nums[i])?a:b+nums[i];
        }
    }
    return (a>b)?a:b;
}
