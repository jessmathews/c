#include <stdio.h>
#include <stdlib.h>

int main() {
    char characterName[] = "John";
    int characterAge = 29;

    printf("There was once a man named %s\n",characterName);
    printf("He was %d years old\n",characterAge);
    printf("He really liked the name %s\n",characterName);
    characterAge = 40;
    printf("He did not like being %d years old\n",characterAge);
    return 0;
}