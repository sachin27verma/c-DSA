#include <stdio.h>
#include <stdlib.h>
int main()
{

    int *p, *q;
    p = (int *)malloc(5 * sizeof(int));
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;
    int i;
    for (i = 0; i < 5; i++)
        printf("%d ", p[i]);
    printf("\n");
    q = (int *)malloc(10 * sizeof(int));
    for (i = 0; i < 5; i++)
        q[i] = p[i];

    printf("\n");
    free(p);
    p = q;
    q = NULL;
    for (i = 0; i < 5; i++)
        printf("%d ", p[i]);

    return 0;
}