#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int nAge;
    int nSex;
    char email[10];
    char phone[13];
};

typedef struct Student Student;

int max(int x, int y)
{
    return x > y ? x : y;
}

Student createStudent()
{
    Student stu;
    stu.nAge = 12;
    stu.nSex = 1;
    return stu;
};

Student *createStudent1()
{
    Student *stu = (Student *)malloc(sizeof(Student));
    stu->nAge = 22;
    stu->nSex = 2;
    return stu;
};

void show()
{
    int nAge = 10;
    int *test = &nAge;
    int (*fMax)(int, int) = &max; // &可以省略
    Student stu = createStudent();
    printf("student 0 age  = : %d\n", stu.nAge);

    Student *stu1 = createStudent1();
    printf("student 1 age  = : %d\n", stu1->nAge);

    printf("max 12 and 13  = : %d\n", fMax(12, 13));

    printf("Address of var variable: %p\n", &nAge);

    /* 在指针变量中存储的地址 */
    printf("Address stored in ip variable: %p\n", test);
    /* 使用指针访问值 */
    printf("Value of *ip variable: %d\n", *test);

    printf("this is show ...\n");
}