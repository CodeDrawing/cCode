#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//打印数组
void print_arr(int arr[],int n){
    for (int i = 0; i < n; ++i) {
        printf("%3d ",arr[i]);
    }
    printf("\n");
}
//合并
void merge(int arr[],int *temp_arr,int left,int mid,int right){
    //标记左半区第一个未排序的元素
    int l_pos=left;
    //标记右半区第一个未排序的元素
    int r_pos=mid+1;
    //临时数组元素的下标（因为合并的是left到right之间的部分）
    int temp_pos=left;
    //合并
    while(l_pos<=mid&&r_pos<=right){

        if(arr[l_pos]<arr[r_pos]){
            temp_arr[temp_pos++]=arr[l_pos++];
        }else{
            temp_arr[temp_pos++]=arr[r_pos++];
        }
    }
    //合并左半区剩余的元素
    while(l_pos<=mid){

        temp_arr[temp_pos++]=arr[l_pos++];
    }
    //合并右半区剩余的元素
    while(r_pos<=right){

        temp_arr[temp_pos++]=arr[r_pos++];
    }
    //把临时数组赋值给arr
    while (left<=right){
        arr[left]=temp_arr[left];
        left++;
    }
}
void msort(int arr[],int *temp_arr,int left,int right){
    //如果只有一个元素，那么就不需要继续划分
    //如果只有一个元素的区域，本身是有序的，只需要被归并即可
    if(left<right){
        //找中间元素
        int mid=(left+right)/2;
        //递归划分左半区
        msort(arr,temp_arr,left,mid);
        //递归划分右半区
        msort(arr,temp_arr,mid+1,right);
        //合并已经排序的部分
        merge(arr,temp_arr,left,mid,right);

    }

}

void merge_sort(int arr[],int n){
    int *temp_arr=(int *)malloc(n*sizeof(int));
    if(temp_arr){
        msort(arr,temp_arr,0,n-1);
        free(temp_arr);
        temp_arr=NULL;
    }else{
        printf("error\n");
    }
}
int main(){
    int arr[10]={15,21,32,5,64,18,48,55,34,32};
    print_arr(arr,10);
    merge_sort(arr,10);
    print_arr(arr,10);
    return 0;
}

