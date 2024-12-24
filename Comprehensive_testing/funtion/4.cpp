#ifdef __cplusplus
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#else
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#endif // __cplusplus

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
int countSubStr(const std::string &source, const std::string &target)
{
    std::string::size_type count = 0;
    int current = 0;
    while (1)
    {
        current = source.find(target, current);
        if (current == std::string::npos)
        {
            break;
        }
        count++;
        current += 1;
    }
    return count;
}
int main()
{
    int minLength;
    std::string text;
    std::cin >> minLength >> text;
    std::map<std::string, int> counter;
    std::vector<std::string> strCache;
    for (size_t start = 0; start < text.length() + 1; start++)
    {
        for (size_t i = minLength; i < text.length() - start + 1; i++)
        {
            std::string str{text.begin() + start, text.begin() + start + i};
            counter[str] = countSubStr(text, str);
            strCache.push_back(str);
        }
    }
    int maxCount = 0;
    std::string findedStr;

    for (auto i = strCache.begin(); i != strCache.end(); i++)
    {
        if (counter[*i] > maxCount)
        {
            maxCount = counter[*i];
            findedStr = *i;
        }
        if(counter[*i] == maxCount && (*i).length() > findedStr.length()){
            findedStr = *i;
        }
    }
    std::cout << findedStr << std::endl;
}