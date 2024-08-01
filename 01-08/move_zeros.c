#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int c=0,i,j;

    for(i=0,j=0;i<numsSize;i++){
        if(nums[i] != 0)
            nums[j++] = nums[i];
        else
            c++;
    }

    while(c--)
        nums[j++]=0;
}

int main(){
    moveZeroes({1,2,0,3,0,4,9})
}