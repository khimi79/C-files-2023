#include <stdio.h>
#include <math.h>
 
int main()
{
    float x = 9.2, y = 5.3;
    float result;

    result = sin (y/sqrt (pow(x,2)+pow(y,2)));
    printf("%d",result);
    return 0;
}