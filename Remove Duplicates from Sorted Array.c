int removeDuplicates(int* nums, int numsSize) {    
    int length = 0;
    int a,b = 0;
    if(numsSize != 0){
        for(int i = 0; i<numsSize-1;i++){
            a = nums[i];
            b = nums[i+1];
            if(a!=b){
                length++;
                nums[length] = b;
            }
        }
        length ++;
    }
    printf("%d\n", length);
    return length;
}
