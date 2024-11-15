#include <stdio.h>
int check(int num){
    int nums[3];
    nums[0] = num%10;
    nums[1] = (num % 100) / 10;
    nums[2] = num / 100;
    return (nums[0] + nums[1] + nums[2] == 12) && (nums[0] * nums[1] * nums[2] == 42);
}
int main(){
    for (size_t i = 200; i < 300; i++)
    {
        if(check(i))
        {
            printf("%d\n", i);
        }
    }
    
}