bool containsDuplicate(int* nums, int numsSize) {
    bool flag = false;
    int a = 0, b = 0; 
    if(numsSize != 0){
        for(int i = 0; i< numsSize-1;i++){
            a = nums[i];
            for(int j = i+1; j<numsSize; j++){
                b = nums[j];
                if(a == b){
                    flag = true;
                }else{
                    continue; 
                }

            }
        }
    }
    return flag;
}
