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
typedef struct student
{
    int ID;
    char name[20];
    int score;
    struct student *pNext;
} STUDENT;
STUDENT* create(){
    int id;
    STUDENT *head = malloc(sizeof(STUDENT));
    STUDENT *current = head;
    scanf("%d", &id);
    while(1)
    {
        current->ID = id;
        scanf("%s", current->name);
        scanf("%d", &current->score);
        scanf("%d", &id);
        if(id == -1){
            current->pNext = NULL;
            break;
        }
        current->pNext = malloc(sizeof(STUDENT));
        current = current->pNext;
    }
    return head;
}
void print(STUDENT* student){
    STUDENT *current = student;
    while (current != NULL)
    {
        printf("%d\n", current->ID);
        printf("%s\n", current->name);
        printf("%d\n", current->score);
        current = current->pNext;
    }
}
int free2(STUDENT* student){
    if(student->pNext != NULL){
        free2(student->pNext);
    }
    free(student);
}
int main()
{
    STUDENT *student = create();
    print(student);
    free2(student);
}
