void moveZeroes(int* nums, int numsSize) {
    int a = 0;
    int j=0,k=0;
    int *temp = malloc(numsSize*sizeof(int));
    for(int i = 0;i<numsSize;i++){
        a = nums[i];
        if(a == 0){
            memcpy(temp+numsSize-1-j,nums+i,sizeof(int));
            j++;
        }else{
            memcpy(temp+k,nums+i,sizeof(int));
            k++;
        }
    }
    memcpy(nums,temp,numsSize*sizeof(int));
}
