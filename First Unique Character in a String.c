int firstUniqChar(char* s) {
    int a = strlen(s);
    int count[26] = {0};
    for(int i = 0;i<a;i++){
        count[s[i]-'a']++;
    }
    for(int j = 0;j<a;j++){
        if(count[s[j]-'a'] ==1){
            return j;
            break;
        }
    }
    return -1;
}
