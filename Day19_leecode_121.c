#include <stdio.h>
int maxProfit(int* prices, int pricesSize){
    int max=0;
    int temp=0;
    for (int i = 1; i < pricesSize; ++i) {
        if(prices[i]>max){
            if(prices[i]<prices[i-1]){
                continue;
            }
            if(i>2){
                if(prices[i]<prices[i-2]){
                    continue;
                }
            }

            if(i<pricesSize-1){
                if(prices[i]<prices[i+1]){
                    continue;
                }
            }

            temp=prices[i];

            for (int j = 0; j <=i; ++j) {
                if((temp-prices[j])>max){
                    max=temp-prices[j];
                }

            }
        }
    }
    return max;
}
int main(){
int prices[]={7,1,5,3,6,4};
    int max=maxProfit(prices,6);
    printf("%d\n",max);
}

