#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

struct Node* head;
int main()
{
    head = NULL;
    printf("How many numbers?\n");
    int n,i,x;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Enter the number\n");
    }



    return 0;
}