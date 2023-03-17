#include <stdio.h>
typedef struct stu{
    int s_id;
    char std_name[20];
}STU;
typedef struct tea{
    int t_id;
    char tea_name[20];
    STU stus[20];
}TEA;
int main() {
    STU stu1={10001,"张三"};
    STU stu2={10002,"李四"};
    STU stu3={10003,"王五"};
    TEA tea={10001,"zzz",{stu1,stu2,stu3}};
    struct tea *p_tea=&tea;
    printf("the teacher name is %s\n",p_tea->tea_name);
    printf("the teacher have this students\n");
    for (int i = 0; i < 3; ++i) {
        printf("NO.%d student's name is %s\n",i,p_tea->stus[i].std_name);
    }
return 0;
}

