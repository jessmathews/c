#include <stdio.h>
#include <stdlib.h>

int main() {
    int age;
    double gpa;
    char name[20];
    char grade;
    printf("Enter your Name:");
    scanf("%s",name); // scanf takes input only upto first space ;use fgets(name,20,stdin) for full standard input but this also includes a new line as you click enter.
    
    printf("Enter your age:");
    scanf("%d", &age);
    printf("Enter your GPA:");
    scanf("%lf", &gpa);
    printf("Enter your Grade");
    scanf("%c",&grade);
    printf("You are %d years old!\n",age);
    printf("Your GPA is %lf",gpa);

}