#include <stdio.h>

int main()
{
    int a = -1;
    unsigned int b = 1;

    if (a<b) {
        printf("a < b \n");
    }
    else {
        printf("a >= b (a가 unsigned로 변환됨) \n");
    }

    return 0;
}

