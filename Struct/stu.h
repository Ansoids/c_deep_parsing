#ifndef H_STU_H
#define H_STU_H

/* 学生结构体 */
typedef struct Student {
  char name[20];
  int stuNum;
  float score;
} Stu;

extern void Stu_initFun(int n, Stu buf[]);

static void Stu_alter(int n, void *buf);
static void Stu_print(int n, void *buf);

#endif
