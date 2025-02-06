#include <stdio.h>
#include <stdlib.h>
struct Node
{
    struct Node *last;
    struct Node *next;
    int index;
};

int main()
{
    int n;
    scanf("%d", &n);
    struct Node *node_array = (struct Node *)calloc(n, sizeof(struct Node));
    for (size_t i = 0; i < n; i++)
    {
        if (i != 0)
        {
            node_array[i].last = &node_array[i - 1];
        }
        node_array[i].index = i + 1;
        if (i != n - 1)
        {
            node_array[i].next = &node_array[i + 1];
        }
    }
    node_array[0].last = &node_array[n - 1];
    node_array[n - 1].next = &node_array[0];
    int current_size = n;
    int count = 1;
    struct Node *current_node = node_array;
    while (current_node != current_node->next)
    {
        
        if(count == 3){
            count = 0;
            current_node->last->next = current_node->next;
            current_node->next->last = current_node->last;
            current_size--;
        }
        count++;
        current_node = current_node->next;
    }
    printf("%d", current_node->index);
}