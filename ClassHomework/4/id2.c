#include <stdio.h>
int main(){
    float nums[9];
    for (size_t i = 0; i < 9; i++)
    {
        scanf("%f", &nums[i]);
    }
    int order = (nums[0] < nums[1]);
    float m;
    scanf("%f",&m);
    int hasOutput = 0;
    for (size_t i = 0; i < 9; i++)
    {
        {
            if((order && (!hasOutput) && m < nums[i]) || ((!order) && (!hasOutput) && m >=nums[i])){
                printf("%.0f ", m);
                hasOutput = 1;
            }
            printf("%.0f ", nums[i]);
        }    
    }
    if(!hasOutput){
        printf("%.0f", m);
    }    
}