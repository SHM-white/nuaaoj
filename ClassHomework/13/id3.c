#ifdef __cplusplus
#include <iostream>
#include <cstring>
#include <vector>
#else
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#endif // __cplusplus

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
typedef struct Node
{
    int num;
    struct Node *last;
    struct Node *next;
} Node;

int main()
{
    int n;
    Node *head = malloc(sizeof(Node));
    Node *last = NULL;
    Node *current = head;
    while (1)
    {
        scanf("%d", &n);
        if(n == -1){
            break;
        }
        current->num = n;
        current->last = last;
        last = current;
        current->next = malloc(sizeof(Node));
        current = current->next;
        current->next = NULL;
        current->last = last;
    }
    while (1)
    {
        current = current->last;
        printf("%d ",current->num);
        if(current == head){
            break;
        }
    }
    
}