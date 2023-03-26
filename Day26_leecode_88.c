#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int *pnums1=nums1;
    int flag=0;
    int *a=(int *)malloc(sizeof(int)*(m+n));
    int *pa=a;
    if(nums2Size==0){

    }else{
        for(int i=0;i<=m;i++){
            for(int j=flag;j<=n;j++){
                printf("flag = %d\n",flag);
                printf("nums1[%d] = %d\n",i,nums1[i]);
                printf("nums2[%d] = %d\n",j,nums2[j]);

                if(nums1[i]<nums2[j]&&nums1[i]!=0){

                    printf("---------------\n");
                    *a=nums1[i];
                    a++;
                    break;
                }else if(j!=n&&nums1[i]>=nums2[j]){
                    printf("==============\n");
                    *a=nums2[j];
                    flag++;
                    a++;
                }else{
                    printf("---------------\n");
                    *a=nums1[i];
                    a++;
                    break;
                }
            }
        }
        for (int i = 0; i < nums1Size; ++i) {
            *nums1++=*pa++;
        }
        for (int i = 0; i < nums1Size; ++i) {
            printf("%d\n",pa[i]);
        }
        nums1=pa;
    }

}
int main(){
   int nums1[2] = {2,0}, m = 1, nums2[1] = {1}, n = 1;
    merge(nums1,2,m,nums2,1,n);
//    for (int i = 0; i < 6; ++i) {
//        printf("%d\n",nums1[i]);
//    }
}

