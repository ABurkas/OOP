#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int x = 5;
    int *p;
    p = &x;
    printf("%d\n", &x);
    *p = 6;
    printf("%d\n", *p);
    int **q;
    q = &p;
    printf("%d\n", *(*q));
    int ***r;
    r = &q;
    printf("%d", r);

    return 0;
}