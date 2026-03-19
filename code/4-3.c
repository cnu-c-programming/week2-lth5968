#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int isPrime = 1;

    if (n <= 1)
        isPrime = 0;
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
