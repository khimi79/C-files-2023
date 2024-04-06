#include <stdio.h>

int main() {
    float physics, chemistry, biology, totalmarks, percentage;

    printf("Enter physics marks : ");
    scanf("%f", &physics);
    printf("Enter chemistry marks : ");
    scanf("%f", &chemistry);
    printf("Enter biology marks : ");
    scanf("%f", &biology);
    
    totalmarks = physics + chemistry + biology;
    percentage = totalmarks / 300 * 100;

    printf("Total marks secured  : %.2f\n",totalmarks);
    printf("percentage secured : %.1f\n",percentage);

    
    if (physics >= 35 && chemistry >= 35 && biology >=35) {
        if (percentage >= 90 && percentage <= 100) {
            printf("Grade A+ \n Distinction \n");
        } else if (percentage >= 80 && percentage < 90) {
            printf("Grade A \n Great");
        } else if (percentage >= 70 && percentage < 80)  {
            printf("Grade B \n Good");
        } else if (percentage >= 60 && percentage <70) {
            printf("Grade C \n Good");
        }else if (percentage > 35 && percentage <60) {
            printf("Grade D \n Need Improvement");
        } else {
            printf("Grade F \n FAIL"); 
        }

        printf("Congratulations! \n");
        
    } else {
        printf("Sorry, you have failed in one or more subject.\n");
    }

    return 0;
}