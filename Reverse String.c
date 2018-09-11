char* reverseString(char* s) {
    unsigned int a = strlen(s);
    char* out = malloc((a+1)*sizeof(char));
    if(a!=0){   
        for(int i=0;i<a;i++){
            memcpy(out+a-1-i,s+i,sizeof(char));
        }
    }
    *(out+a)='\0';
    return out;
}
