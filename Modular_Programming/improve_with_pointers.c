#include <stdio.h>

void age_improve(int **);

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	age_improve(&ageAddr);

	printf("Your new age will be %d!\n", age);
	return 0;
}


void age_improve(int ** ageAddr) {
    if (**ageAddr > 20) {
         **ageAddr = **ageAddr - 10;
    }
    else {
        **ageAddr = **ageAddr * 2;
    }
}

/*
#include <stdio.h>

void elixir(int *);

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	elixir(ageAddr);

	printf("Your new age will be %d!\n", age);
	return 0;
}


void elixir(int *age){
	if (*age>20){
		*age -= 10;
	} else {
		*age *= 2;
	}
}
*/