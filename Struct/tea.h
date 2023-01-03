#ifndef H_TEA_H
#define H_TEA_H

typedef struct Teacher
{
    /* 教师结构体 */
    char name[20];
    int teaNum;
    int grade;
}Tea;

extern void Tea_initFun(int n, Tea buf[]);
static void Tea_alter(int n, void *buf);
static void Tea_print(int n, void *buf);

#endif
