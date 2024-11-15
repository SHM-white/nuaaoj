    #include <stdio.h>
    void func(int n,int factor){
        if (n % factor == 0){
            printf("%d ", n);
        }
    }
    int main(){
        int m, n, f;
        scanf("%d %d %d", &m, &n, &f);
        for (size_t i = m; i <= n; i++)
        {
            func(i, f);
        }
        
    }