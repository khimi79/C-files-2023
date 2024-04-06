#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);

    if (age < 18){
        printf("you are consider as minor\n");
        printf("Not fit for job");
    }
    else{
        if(age > 18 && age < 50){
        printf("You are eligible for the job\n");
        printf("Please fill the form");
        }
        else{
            printf("Age is not satisfactory");
            printf("\nRetirement process");
        }
    
    }
    return 0;
}