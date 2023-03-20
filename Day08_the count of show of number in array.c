#include <stdio.h>

#define output(a) \
for (int i = 0; i <10 ; ++i) \
{ printf("%d  ",a[i]);       \
                  \
}


int main() {
    int a[10];
    printf("Please input 10 number\n");
    for (int i = 0; i < 10; ++i) {
        scanf(("%d"), &a[i]);
    }
    printf("the 10 numbers is\n");
    output(a);
    printf("\n");
    int current, count, max;
    count = max;
    for (int i = 0; i < 10; ++i) {
        count = 0;
        for (int j = 0; j < 10; ++j) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        if (count > max) {
            current = i;
            max = count;
        }

    }
    printf("current = %d\n", a[current]);
    printf("count = %d\n", max);

    return 0;
}