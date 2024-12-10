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

typedef struct
{
    char id[20];
    char name[100];
    int grade1;
    int grade2;
    int grade3;
} Student;
Student input(){
    Student tmp;
    scanf("%s %s %d %d %d", &tmp.id, &tmp.name, &tmp.grade1, &tmp.grade2, &tmp.grade3);
    return tmp;
}
void print(Student* stu){
    printf("%s,%s,%d,%d,%d\n", stu->id, stu->name, stu->grade1, stu->grade2, stu->grade3);
}
int main(){
    int n;
    scanf("%d", &n);
    Student *students = calloc(n, sizeof(Student));
    for (size_t i = 0; i < n; i++)
    {
        students[i] = input();
    }
    for (size_t i = 0; i < n; i++)
    {
        print(&students[i]);
    }
    
    
}