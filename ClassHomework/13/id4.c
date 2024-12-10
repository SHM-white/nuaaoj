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
    int data;
    struct Node *next;
} Node;
int main()
{
    int n;
    Node *head = malloc(sizeof(Node));
    Node *current = head;
    current->next = NULL;
    scanf("%d", &n);
    for (size_t i = 0; i < n; i++)
    {
        int m;
        scanf("%d", &m);
        current->data = m;
        if(i < n - 1)
        {
            head = malloc(sizeof(Node));
            head->next = current;
            current = head;
        }
    }

    current = head;
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
    Node *miniestNode = head;
    Node *nodeBeforeMin = NULL;
    Node *last = NULL;
    current = head;
    for (size_t i = 0; i < n; i++)
    {
        if(current->data < miniestNode->data){
            nodeBeforeMin = last;
            miniestNode = current;
        }
        last = current;
        current = current->next;
    }
    if(miniestNode != head){
        nodeBeforeMin->next = miniestNode->next;
        miniestNode->next = head;
        head = miniestNode;
    }
    current = head;
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    
}