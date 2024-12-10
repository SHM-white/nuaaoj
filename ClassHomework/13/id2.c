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
typedef struct LinkNode
{
    int num;
    struct LinkNode *next;
} LinkNode;
typedef struct
{
    LinkNode *node;
} LinkHead;
typedef struct
{
    LinkNode *last;
    LinkNode *current;
} NodeResult;
LinkHead *create(int n)
{
    LinkHead *head = malloc(sizeof(LinkHead));
    LinkNode *current;
    for (size_t i = 0; i < n; i++)
    {
        if (i == 0)
        {
            current = malloc(sizeof(LinkNode));
            head->node = current;
        }
        else
        {
            current->next = malloc(sizeof(LinkNode));
            current = current->next;
        }
        current->num = i + 1;
    }
    return head;
}
NodeResult getElement(int index, LinkHead *head, int n)
{
    LinkNode *last = NULL;
    LinkNode *current = head->node;
    for (size_t i = 0; i < min(index + 1, n); i++)
    {
        last = current;
        current = current->next;
    }
    return (NodeResult){last, current};
}
void move(int num, int moveStep, LinkHead *head, int n)
{
    int index;
    LinkNode *last = NULL;
    LinkNode *target = head->node;
    for (size_t i = 0; i < n; i++)
    {
        if (target->num == num)
        {
            index = i;
            break;
        }
        else
        {
            last = target;
            target = target->next;
        }
    }
    NodeResult result = getElement(min(max(index + moveStep, 0), n - 1), head, n);
    if (result.last == NULL)
    {
        head->node = target;
    }
    else
    {
        result.last->next = target;
    }
    if (target->next != NULL)
    {
        if (last == NULL)
        {
            head->node = target->next;
        }
        else
        {
            last->next = target->next;
        }
    }
    target->next = result.current;
}
int main()
{
    int m, n;
    scanf("%d", &n);
    LinkHead *head = create(n);
    scanf("%d", &m);
    for (size_t i = 0; i < m; i++)
    {
        int p, q;
        scanf("%d %d", &p, &q);
        move(p, q, head, n);
    }
    LinkNode *current = head->node;
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", current->num);
        current = current->next;
    }
}
