#include <stdio.h>

int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    int num1, num2;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    int reversedNum1 = reverseNumber(num1);
    int reversedNum2 = reverseNumber(num2);
    
    printf("Reversed number 1: %d\n", reversedNum1);
    printf("Reversed number 2: %d\n", reversedNum2);
    
    return 0;
}
