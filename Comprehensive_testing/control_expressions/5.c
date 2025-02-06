#include <stdio.h>
void printLine(int total, int n){
    for (int j = 0; j < (total - 1) / 2 - n; j++){
        printf("  ");
    }
    for (int j = 0; j < n * 2 + 1; j++){
        if(j != 0){
            printf(" ");
        }
        printf("*");
    }
    printf("\n");
}
void printRect(int n){
    int flag = 0;
    for (int i = 0; i < n; i++){
        if(!flag){
            printLine(n, i);
        }
        else{
            printLine(n, n - i - 1);
        }
        if(i >= (n - 1) / 2){
            flag = 1;
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    printRect(n);
}