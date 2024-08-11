#include <stdio.h>
int main(void) {
    int ages[10];
    int i;
    int ageMin = 100;
    for (i = 0; i < 10; i++) {
        scanf("%d", &ages[i]);
        if (ages[i] < ageMin) {
            ageMin = ages[i];
        }
    }
    printf("The minimun age is %d.\n", ageMin);
    printf("Age differences with the youngest person:\n");
    for(i = 0; i < 10; i++){
        printf("%d:%d\n", ages[i], ages[i] - ageMin);
    }
    return 0;
}
