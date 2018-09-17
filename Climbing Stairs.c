int climbStairs(int n) {
    if(n<=0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    int one_left = 2;
    int two_left = 1;
    int f=0;
    for(int i = 2;i<n;i++){
        f = one_left+two_left;
        one_left = two_left;
        two_left = f;
    }
    return f;
}
