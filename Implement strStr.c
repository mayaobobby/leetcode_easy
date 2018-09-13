int strStr(char* haystack, char* needle) {
    int length_h = strlen(haystack);
    int length_n = strlen(needle);
    int result =-1;
    if(needle[0] =='\0'){
        result = 0;
    }
    else{
        for(int i = 0;i<=length_h-length_n;i++){
            int cmp =memcmp(haystack+i,needle,length_n);
            if(cmp==0){
                result=i;
                break;
            }
        }
    }
    return result;
}
