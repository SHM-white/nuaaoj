#include <stdio.h>
#include <stdbool.h>
const char target[5] = {'a', 'e', 'i', 'o', 'u'};
bool is_vowel(char c) {
    for (int i = 0; i < 5; i++) {
        if (c == target[i]) {
            return true;
        }
    }
    return false;
}
int find_vowel(char *str) {
    int current = 0;
    while (*(str + current) != '\0' )
    {
        if(is_vowel(*(str + current))){
            return current + 1;
        }
        current++;
    }
    return 0;
}
int main() {
    char str[10240];
    scanf("%s", str);
    int pos = find_vowel(str);
    printf("%d\n", pos);
    return 0;
}