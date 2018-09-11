/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    *returnSize = digitsSize;
    int* returns = malloc(digitsSize*sizeof(int));
    int a = 0;
    int ahead = 1;
    for(int i = digitsSize-1;i>=0;i--){
        a=digits[i];
        if(ahead == 1){
            a=a+1;
            if(a == 10){
                a=0;
                ahead = 1;
            }
            else{
                ahead = 0;
            }
        }
        else{
           a = a; 
        }
        returns[i] = a;
    }
    if(ahead == 1){
        realloc(returns,((*returnSize)++)*sizeof(int));
        mmap(returns+1,returns,digitsSize*sizeof(int));
        returns[0]=1;   
    }
        
    
    return returns;
}
