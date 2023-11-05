#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int a = 1025;
    int *p;
    p = &a;
    printf("%d\n", sizeof(int));
    printf("Address = %d, value = %d", p,*p);
    char *p0;
    p0 = (char*)p;
    printf("size of char is %d bytes\n", sizeof(char));
    printf("Address = %d, value = %d\n", p0, *p0);
    printf("%d", &p0);


    return 0;
}