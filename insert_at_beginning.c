#include<stdio.h>
#include<stdlib.h>

void Increment(int *a){
    *a += 1;
}

int main()
{   
    int a = 10;
    Increment(&a);
    printf("%d", a);
    return 0;
}