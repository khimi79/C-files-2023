#include<stdio.h>
struct str
{
    char name[20];
    int roll;
    int age;
    float marks;
};
int main(){
    struct str var1 = {"ram",10,21,79.5};
    struct str var2 = {"rahul",21,22,91.23};
    printf("\nStudent  1 Details");
    printf("\nName : %s",var1.name);
    printf("\nRoll : %d",var1.roll);
    printf("\nAge : %d",var1.age);
    printf("\nMarks :%.2f\n",var1.marks);
    printf("\nStudent 2 Details");
    printf("\nName : %s",var2.name);
    printf("\nRoll : %d",var2.roll);
    printf("\nAge : %d",var2.age);
    printf("\nMarks : %.2f",var2.marks);
    return 0;
}                          