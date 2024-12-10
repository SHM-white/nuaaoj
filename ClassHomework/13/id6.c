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
struct stud_node
{
    int num; /*学号*/
    char name[20]; /*姓名*/
    int score;              /*成绩*/
    struct stud_node *next; /*指向下个结点的指针*/
};
typedef struct stud_node StudentNode;
struct stud_node *createlist();
struct stud_node *deletelist(struct stud_node *head, int min_score);

int main()
{
    StudentNode *head = createlist();
    int score;
    scanf("%d", &score);
    head = deletelist(head, score);
    StudentNode *current = head->next;
    while (current != NULL)
    {
        printf("%d %s %d\n", current->num, current->name, current->score);
        current = current->next;
    }
}
struct stud_node *createlist()
{
    StudentNode *head = malloc(sizeof(StudentNode));
    StudentNode *current = head;
    while (1)
    {
        int id;
        scanf("%d", &id);
        if(id == 0){
            break;
        }
        current->next = malloc(sizeof(StudentNode));
        current = current->next;
        current->num = id;
        scanf("%s %d", (current->name), &(current->score));
    }
    current->next = NULL;
    return head;
}
struct stud_node *deletelist(struct stud_node *head, int min_score)
{
    StudentNode *current = head->next;
    StudentNode *last = head;
    while (current != NULL)
    {
        if(current->score < min_score){
            last->next = current->next;
            free(current);
            current = last->next;
            continue;
        }
        last = current;
        current = current->next;
    }
    return head;
}
