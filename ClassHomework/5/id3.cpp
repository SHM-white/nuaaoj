#ifdef __cplusplus
#include <iostream>
#else
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#endif // __cplusplus

//#define max(a, b) ((a) > (b) ? (a) : (b))
//#define min(a, b) ((a) < (b) ? (a) : (b))
template<typename T>
class Number
{
public:
    int x;
    int y;
    T number;
    Number(T n) :number{n}{}
    Number() = default;
    Number& operator()(int x1,int y1){
        x = x1;
        y = y1;
        return *this;
    }
    bool operator>(const Number& another) const
    {
        return abs(this->number) > abs(another.number);
    }
    bool operator==(const Number& another) const
    {
        return abs(this->number) == abs(another.number);
    }
    //bool operator<(const Number& another) const
    //{
    //    return abs(this->number) < abs(another.number);
    //}
    //std::ostream& operator<<(std::ostream& os){
    //    os << number << ' ' << x << ' ' << y << std::endl;
    //    return os;
    //}
    std::istream& operator<<(std::istream& is){
        is >> number;
        return is;
    }
};

int main(){
    Number<long long> map[3][4]{0};
    Number<long long> *max = nullptr;
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            map[i][j] << std::cin;

            map[i][j](i, j);

            if(i == 0 && j == 0){
                max = &map[i][j];
            }
            else if(map[i][j]>(*max)){
                max = &map[i][j];
            }
            //else if (map[i][j] == *max)
            //{
            //    if(i) < 
            //}
        }
    }
    std::cout << abs(max->number) << ' ' << max->x + 1 << ' ' << max->y + 1<< std::endl;
}