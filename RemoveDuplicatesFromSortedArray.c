int removeDuplicates(int* nums, int numsSize) {
   
    int newadd=1;

    for(int i=1;i<numsSize;i++){
        if(nums[i]!=nums[i-1]){
            nums[newadd]=nums[i];
            newadd++;
        }
    }
    return newadd;
}
