#include <stdio.h>

int main()
{
    float n1, n2, n3;
    printf("Enter three numbers : ");
    scanf("%f %f %f", &n1, &n2, &n3);

    if (n1 <= n2 && n1 <= n3){
        printf("The smallest number is %.2f\n",n1);
    }
    else if(n2 <= n1 && n2 <= n3){
        printf("The smallest number is %.2f\n");
    }
    else {
        printf("The smallest number is %.2f\n");
    }
    return 0;

}