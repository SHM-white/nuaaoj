#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

typedef struct Number {
    int x;
    int y;
    long long number;
} Number;

void set_coordinates(Number* num, int x1, int y1) {
    num->x = x1;
    num->y = y1;
}

bool compare_greater(const Number* num1, const Number* num2) {
    return abs(num1->number) > abs(num2->number);
}

bool compare_equal(const Number* num1, const Number* num2) {
    return abs(num1->number) == abs(num2->number);
}

void input_number(Number* num) {
    scanf("%lld", &num->number);
}

int main() {
    Number map[3][4];
    Number* max = NULL;

    for (size_t i = 0; i < 3; i++) {
        for (size_t j = 0; j < 4; j++) {
            input_number(&map[i][j]);
            set_coordinates(&map[i][j], i, j);

            if (i == 0 && j == 0) {
                max = &map[i][j];
            } else if (compare_greater(&map[i][j], max)) {
                max = &map[i][j];
            }
        }
    }
    printf("%lld %d %d\n", abs(max->number), max->x + 1, max->y + 1);
    return 0;
}
