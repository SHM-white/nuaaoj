#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))

int main() {
    int n;
    scanf("%d", &n);

    // 分配内存
    bool** map = (bool**)malloc(n * sizeof(bool*));
    for (int i = 0; i < n; i++) {
        map[i] = (bool*)malloc(n * sizeof(bool));
    }
    bool* result = (bool*)malloc(n * sizeof(bool));
    for (int i = 0; i < n; i++) {
        result[i] = false;
    }

    // 读取输入
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &map[i][j]);
        }
    }

    // 初始化result
    for (int i = 0; i < n; i++) {
        result[i] = map[0][i];
    }

    // 处理每一行
    for (int i = 0; i < n; i++) {
        if (map[i][0]) {
            int errorCount = 0;
            for (int j = 1; j < n; j++) {
                if (j == i) {
                    continue;
                }
                errorCount += map[i][j] ^ result[j];
            }
            if (errorCount >= n / 2) {
                map[i][0] = false;
            }
        }
    }

    // 输出结果
    for (int i = 0; i < n; i++) {
        if (result[i]) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");

    // 释放内存
    for (int i = 0; i < n; i++) {
        free(map[i]);
    }
    free(map);
    free(result);

    return 0;
}