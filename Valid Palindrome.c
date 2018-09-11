bool isPalindrome(char* s) {
    bool a = true;
    int length = strlen(s);
    int length_act = 0;
    if(length != 0){
        for(int i=0;i<length;i++){
            if((s[i]<='z'&&s[i]>='a') || s[i]<='9'&&s[i]>='0')
                s[length_act++]=s[i];
            if((s[i]<='Z'&&s[i]>='A')){
                s[length_act++]=s[i]+32;
            }
        }
        for(int j=0;j<length_act/2;j++){
            if(s[j] != s[length_act-1-j]){
                a = false;
                break;
            }
        }
    }
    return a;
}
