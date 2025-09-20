#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

     for (int i = 0; i <= n; i++) {
         // increasing numbers
         for (int j = 0; j <= i; j++) {
             printf(" %c",'A'+j);
         }
         // decreasing numbers
         for (int j = i - 1; j >= 0; j--) {
             printf(" %c",'A'+j);
         }
         printf("\n");
     }
return 0;
} 