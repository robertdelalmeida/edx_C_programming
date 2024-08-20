#include <stdio.h>

int main(void) {

    int age;

    int * ageptr;

    scanf("%d", &age);

    ageptr = &age;

    printf("The secret address is...");

    printf("%p\n", ageptr);  

    printf("Now take three drops of the magic elixir. \n");

    * ageptr = * ageptr - 5;

    printf("Did the elixir work? You are %d years old!", age);

    return 0;

}