
#include <stdio.h>
#include "user/user.h"
#include "user/show.h"


int main()
{
    /* 我的第一个 C 程序 */
    printf("Hello, World! \n");

    int age = 12;
    printf("the age is = %d \n", age);

    int result = add(1, 2);

    show();

    return 0;
}