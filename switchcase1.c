#include <stdio.h>

main()
{
    int day;
    printf("Enter a number from 1 to 7 to display a day :");
    scanf("%d",&day);

    switch (day){
        case 1 :printf("MONDAY");
                break;
        case 2 :printf("TUESDAY");
                break;
        case 3 :printf("WEDNESDAY");
                break;
        case 4 :printf("THURSDAY");
                break;
        case 5 :printf("FRIDAY");
                break;
        case 7 :printf("SATURDAY");
                break;
        default :printf("Sorry, invalid day number!");
                break;
    }
    return 0;