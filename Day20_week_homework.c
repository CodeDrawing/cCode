#include <stdio.h>
/*
 * 有一个游戏，取一个花色的所有13张扑克牌，成为一摞，按照如下的规则取牌：（15分）
（1）将最上面一张牌放到这一摞牌的最下面
（2）然后将最上面的一张牌取出
以后不断重复1,2的动作，直到所有的扑克牌取完为止。
问题：如果要使得取出扑克牌的顺序为从小到大，即顺序为：A、2、3、4、5、6、7、8、9、10、J、Q、K，请使用C/C++编程求出最初扑克牌的顺序应该是什么。
 */
//1.将最下面的牌放回原数组最上面
//2.将最下面的牌放到最上面
int main(){
char *poke[13]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
char *origin[13];
int j=0;
char *temp;

    for (int i = 12; i >=0; i--) {
        if(j==0){
            origin[j]=poke[i];
            j++;
            continue;
        }
        for (int k = j-1; k >=0; k--) {
            origin[k+1]=origin[k];
        }
        origin[0]=poke[i];
        temp=origin[j];
        for (int k = j; k >=0; k--) {
            origin[k+1]=origin[k];
        }
        origin[0]=temp;
        j++;
    }
    for (int i = 0; i < 13; ++i) {
        printf("%s ",origin[i]);
    }
    return 0;
}

