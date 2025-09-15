#include<stdio.h>
int main(){
    int n = 72;
    for (int i = 65;i <= n; i++) {
         for (int j = 65; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 65; k <= i; k++) {
            printf("%c",k);
        }
        printf("\n");
    }
    
    return 0;
}