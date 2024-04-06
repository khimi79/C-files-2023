// #include <stdio.h>
// int main()
// {
//     int i, n;
    
//     int t1 = 0, t2 = 1;
//     int nextterm = t1 + t2;

//     printf("enter a value : ");
//     scanf("%d",&n);

//     printf("Fibonacci series : %d %d ",t1,t2);
//     for (i = 3; i <=n; ++i){
//         printf(" %d, ", nextterm);
//         t1 = t2;
//         t2 = nextterm;
//         nextterm = t1 + t2;

//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: %d %d ", first, second);
    
    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    
    printf("\n");
    return 0;
}


