#include <stdio.h>

int main()
{
    int a = 100;
    printf("int : %d\n", a);
    printf("hex : %x\n", a);
    printf("oct : %o\n", a);

    char b = 'c';
    printf("char : %c\n", b);

    char* c = "hello world!";
    printf("string : %s\n", c);

    float d = 3.141592;
    printf("float : %f\n", d);
    printf("exp : %e\n", d);

    return 0;
}
