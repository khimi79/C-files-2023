#include <stdio.h>
main()
{
    char vovels;
    printf("Enter a character to identify a vovel : ");
    scanf("%c",&vovels);

    switch (vovels){
        case 'a' :printf(" 'a' is a vovel");
                break;
        case 'e' :printf(" 'e' is a vovel");
                break;
        case 'i' :printf(" 'i' is a vovel");
                break;
        case 'o' :printf(" 'o' is a vovel");
                break;
        case 'u' :printf(" 'u' is a vovel");
                break;
        default :printf("sorry, this character is not recognised as a vovel");
                break;
    }
    return 0;