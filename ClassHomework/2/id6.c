#include <stdio.h>
int main(){
    for (size_t i = 0; i < 35; i++)
    {
        for (size_t j = 0; j < 51; j++)
        {
            for (size_t k = 0; k < 101; k+=2)
            {
                if(i * 3 + j * 2 + k / 2 == 100 && i + j + k == 100){
                    printf("%d %d %d\n", i, j, k);
                }
            }
            
        }
        
    }
    
}