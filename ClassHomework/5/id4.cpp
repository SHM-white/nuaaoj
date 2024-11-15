#ifdef __cplusplus
#include <iostream>
#include <vector>
#else
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#endif // __cplusplus

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
int main(){
    int n;
    std::cin >> n;
    std::vector<std::vector<bool>> map;
    std::vector<bool> result;
    result.resize(n, false);
    for (size_t i = 0; i < n; i++)
    {
        std::vector<bool> line;
        for (size_t j = 0; j < n; j++)
        {
            bool r;
            std::cin >> r;
            line.push_back(r);
        }
        map.push_back(std::move(line));
    }
    result = map[0];
    for (size_t i = 0; i < n; i++)
    {
        auto line = map[i];
        if(line[0]){
            int errorCount = 0;
            for (size_t j = 1; j < n; j++)
            {
                if(j == i){
                    continue;
                }
                errorCount += line[j] ^ result[j];
            }
            if(errorCount >= n / 2){
                line[0] = false;
            }
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        if(result[i]){
            std::cout << i + 1 << ' ';
        }
    }
    std::cout << std::endl;
}