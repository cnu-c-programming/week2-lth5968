#include <stdio.h>

int main()
{
    int a, b;
    char op;

    scanf("%d %d %c", &a, &b, &op);

    int result;

    if (op == '+')
        result = a + b;
    else if (op == '-')
        result = a - b;
    else if (op == '*')
        result = a * b;
    else if (op == '/')
        result = a / b;

    printf("%d\n", result);

    return 0;
}
