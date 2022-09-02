#include <stdio.h>
int f(int x, int *py, int **ppz) {
    int y, z;
    **ppz += 1;
    z = **ppz;
    printf("......\n");
    printf("%d\n",z);
    *py += 2;
    y = *py;
        printf("%d\n",y);
    printf("%d\n",x);
    x += 3;
        printf("%d\n",x);

    return x + y + z;
}
void main()
{

    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
   printf("%d\n",f(c,b,a));
}
