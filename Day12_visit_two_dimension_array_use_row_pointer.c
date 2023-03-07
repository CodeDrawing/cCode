
#include <stdio.h>

int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int (*pa)[3]=a,sum=0;
    for (int j = 0; j < 3; ++j) {
        for (int i = 0; i < 3; ++i) {
            sum+=*(*(pa+j)+i);
        }
    }

    printf("%d",sum);
    return 0;
}
