#include <stdio.h>
#include <stdlib.h>

int main() {
    int age;
    double gpa;
    printf("Enter your age:");
    scanf("%d", &age);
    printf("Enter your GPA:");
    scanf("%lf", &gpa);
    printf("You are %d years old!\n",age);
    printf("Your GPA is %lf",gpa);

}