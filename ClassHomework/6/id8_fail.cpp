#ifdef __cplusplus
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <stdio.h>
#else
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#endif // __cplusplus

#define DEBUG

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))

bool isPossible(const std::string &text);
int swap(std::string &text, int first, int second);
int getSteps(const std::string &current, const std::string &target);

bool isPossible(const std::string &text)
{
    int length = text.length();
    std::map<char, int> counter;
    for (size_t i = 0; i < length; i++)
    {
        counter[text[i]]++;
    }
    if (length % 2 == 0)
    {
        bool possible = true;
        for (auto i = counter.begin(); i != counter.end(); i++)
        {
            possible &= (i->second % 2 == 0);
            if (i == counter.end())
            {
                break;
            }
        }
        return possible;
    }
    else
    {
        int possible = 0;
        for (auto i = counter.begin(); i != counter.end(); i++)
        {
            possible += (i->second % 2);
            if (i == counter.end())
            {
                break;
            }
        }
        return possible == 1;
    }
}
int getSteps(const std::string &current, const std::string &target)
{
    std::string newStr = current;
    std::vector<bool> needSwap;
    needSwap.resize(newStr.length(), false);
    int count = 0;
    for (size_t i = 0; i < target.length(); i++)
    {
        needSwap[i] = target[i] != newStr[i];
    }
    for (size_t i = 0; i < needSwap.size(); i++)
    {
        if (!needSwap[i])
        {
            continue;
        }
        int index = newStr.find(target[i], i);
        count += swap(newStr, i, index);
        needSwap[i] = false;
        if (newStr[index] == target[index])
        {
            needSwap[index] = false;
        }

#ifdef DEBUG
        std::cout << "current:" << newStr << std::endl;
        for (size_t j = 0; j < needSwap.size(); j++)
        {
            std::cout << needSwap[j] << ' ';
        }
        std::cout << std::endl;
#endif // DEBUG
    }
#ifdef DEBUG
    std::cout << "current:" << newStr << std::endl;
#endif // DEBUG
    return count;
}
int swap(std::string &text, int first, int second)
{
#ifdef DEBUG
    std::cout << "swap " << first << " and " << second << std::endl;
#endif // DEBUG
    if (second == -1)
    {
        return 0;
    }

    if (first == second)
    {
        return 0;
    }
    char tmp = text[first];
    text[first] = text[second];
    text[second] = tmp;
    return abs(first - second) * 2 - 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    std::string text;
    text.resize(n + 1);
    std::cin >> text;
    n = text.length();
    if (!isPossible(text))
    {
        std::cout << "Impossible" << std::endl;
        return 0;
    }
    std::string target = text;
    std::vector<bool> setted(text.length(), false);
    std::map<char, int> counter;
    for (size_t i = 0; i < n; i++)
    {
        counter[text[i]]++;
    }
    if (n % 2 == 1)
    {
        for (auto i = counter.begin();;)
        {
            if (i->second == 1)
            {
                target[(n - 1) / 2] = i->first;
                setted[(n - 1) / 2] = true;
                i->second -= 1;
                break;
            }
            else
            {
                i++;
            }
            if (i == counter.end())
            {
                break;
            }
        }
    }
    for (size_t targetIndex = 0, textIndex = 0;;)
    {
        if (setted[targetIndex] == false && counter[text[textIndex]] > 1)
        {
            setted[targetIndex] = setted[target.length() - targetIndex - 1] = true;
            target[targetIndex] = target[target.length() - targetIndex - 1] = text[textIndex];
            counter[text[textIndex]] -= 2;
            targetIndex++;
            textIndex++;
        }
        else
        {
            textIndex++;
        }
        if (setted[targetIndex] == true)
        {
            break;
        }
    }

#ifdef DEBUG
    std::cout << target << std::endl;
#endif // DEBUG
    std::cout << getSteps(text, target) << std::endl;
}