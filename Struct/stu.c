#include <stdio.h>
#include "public.h"
#include "stu.h"


static struct Register reg = {};

void Stu_initFun(int n, Stu buf[]){

    reg.n = n;
    reg.buf = (void *)buf;
    reg.print = Stu_print;
    reg.alter = Stu_alter;

    registerFun(&reg);
 
}

static void Stu_alter(int n, void *buf){

    int i = 0;
    int stuNum;
    Stu *stu = (Stu *)buf;

    printf("请输入学号：");
    scanf("%d", &stuNum);

    for(i = 0; i < n; i++){
        if(stu[i].stuNum == stuNum){
            printf("%s %d %f\n", stu[i].name, stu[i].stuNum, stu[i].score);

            printf("输入新信息\n");
            scanf("%s %d %f", &stu[i].name, &stu[i].stuNum, &stu[i].score);
            break;

        }
        if(i == n) printf("无此学生\n");
    }
}

static void Stu_print(int n, void *buf){

    int i = 0;
    Stu *stu = (Stu *)buf;

    for(i = 0; i < n; i++){
        printf("%s %d %f分\n", stu[i].name, stu[i].stuNum, stu[i].score);

    }
}
