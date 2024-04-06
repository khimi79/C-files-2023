#include <stdio.h>
#include <math.h>

int calculateArea (int a, int b, int c){
    int s = (a + b + c)/2;
    int area = sqrt(s*(s-a)*(s-b)*(s-c));

    return area;
}
int main(){
    int side1, side2, side3;
    printf("Enter side 1 :");
    scanf("%d",&side1);

    printf("Enter side 2 :");
    scanf("%d",&side2);

    printf("Enter side 3 :");
    scanf("%d",&side3);

    if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1){
        printf("The traingle can't be formed with this side length, please input proper length of the traingle.");
    }
    else{
        int area = calculateArea(side1,side2,side3);
        printf("The area of the traingle is %d",area);
    }
    return 0;
}

