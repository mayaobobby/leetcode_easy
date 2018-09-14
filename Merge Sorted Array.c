int comparing(const void* a, const void* b){
    return *(int *)a > *(int *)b;  //升序排序
    //return *(int *)b < *(int *)a; //降序排序
}

void merge(int* nums1, int m, int* nums2, int n) {
    int length_nums1 = m+n;
    printf("%d\n",length_nums1);
    for(int i = m,j=0; i<length_nums1; i++,j++){
        nums1[i]=nums2[j];
    }
    qsort(nums1,length_nums1,sizeof(int),comparing);
}
