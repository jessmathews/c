#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    char branch[50];
    int age;
    float gpa;


};

void main() {
    struct Student student1;    
    // student1.name = "Jess"; this won't work because the array is of fixed size but the string can have variable size This is not possible because the pointer could point to a string that is larger than the array.
    student1.age = 20;
    student1.gpa = 4.2;
    strcpy(student1.name,"Jess Mathews");
    printf("%s",student1.name);

}