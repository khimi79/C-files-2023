
    #include <stdio.h>
main()
{
    double a, b;
    printf("Enter a value : ");
    scanf("%lf",&a);
    printf("Enter a second value : ");
    scanf("%lf",&b);

    a = a - b;
    b = a + b;
    a = b - a;
    printf("After swapping, a = %.2lf\n",a);
    printf("After swapping, b = %.2lf\n",b);
    
}