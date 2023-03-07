
#include <stdio.h>
#include "outputArray.h"
#include "Day11_decompression_string.c"
#include "Day11_compression_string.c"
int main()
{
    char a[5000]="aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbccccccccccccffffffffffffeeeeeeeeeeesssssssss";
    char b[5000];
    char c[5000];
    compression(a,b);
    printf("compression before: %s\n",b);
    decompression(b,c);
    printf("compression  after: %s\n",c);
    return 0;
}