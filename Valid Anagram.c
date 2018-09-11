bool isAnagram(char* s, char* t) {
    int lengths = strlen(s), lengtht = strlen(t);
    bool a = true;
    int counts[26] = {0}, countt[26]={0};
    if(lengths==lengtht){
        for(int i=0;i<lengths;i++){
            counts[s[i]-'a']++;
            countt[t[i]-'a']++;
        }
        if(memcmp(counts,countt,26*sizeof(int))!=0){
            a = false;
        }
    }
    else{
        a = false;
    }
    return a;
}
