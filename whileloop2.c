#include <stdio.h>

int main() {
    int N, i;
    
    printf("Enter a positive integer N: ");
    scanf("%d", &N);
    
    i = 1;
    while (i <= N) {
        printf("%d\n", i);
        i++;
    }
    
    return 0;
}
