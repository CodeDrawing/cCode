#include <stdio.h>
#include "outputArray.h"
int removeDuplicates(int* nums, int numsSize){
    int *p_nums=nums;
    int *per_nums=nums;
    int count=1;
    for (int i = 0; i < numsSize; ++i) {
        if(*per_nums!=*p_nums){
            count++;
            p_nums++;
            *p_nums=*per_nums;
            per_nums++;
        }else{
            per_nums++;
        }
    }
    return count;
}
int main(){
int nums[] = {0,0,0,0,0,0,0,0,0,0};
//int *p_nums=&nums;
    int result=removeDuplicates(nums,10);
    printf("%d\n",result);
    output(nums);

}
