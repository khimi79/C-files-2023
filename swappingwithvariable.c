#include <stdio.h>
main()
{
    double first, second, temp;
    printf("enter a value : ");
    scanf("%lf",&first);
    printf("enter second value : ");
    scanf("%lf",&second);

    temp = first;
    first = second;
    second = temp;

    printf("After swapping, first value is %.2lf\n",first);
    printf("After swapping, second value is %.2lf\n",second);

}