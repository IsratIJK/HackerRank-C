#include <stdio.h>

int max_of_four(int a, int i, int c, int i1);

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}

int max_of_four(int a, int i, int c, int i1) {
    int max;

    if(a>c && a>i && a>i1)
        max=a;
    else if(c>a && c>i && c>i1)
        max=c;
    else if(i>a && i>c && i>i1)
        max=i;
    else
        max=i1;

    return max;
}
