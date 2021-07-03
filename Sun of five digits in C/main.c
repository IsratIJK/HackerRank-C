
#include <stdio.h>
int main()
{
    int i, n, d, sum = 0;

    scanf("%d", &n);
    i = n;

    while (i > 0)
    {
        d = i % 10;
        sum = sum + d;
        i = i / 10;
    }
    printf("%d\n", sum);
}
