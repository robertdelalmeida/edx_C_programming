#include <stdio.h>

void behind(int *, int);

int main(void) {
    int array[10];
    int N, i;
    
    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }
    behind(array, N);
    for (i=0; i<N; i++) {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

void behind(int *ptr, int size) {
    int i, greater = 0;

    i = 0;
    while (i < size)
    {
        if (ptr[i] > greater)
            greater = ptr[i];
        i++;
    }

    for(i = 0; i < size; i++) {
        ptr[i] = greater - ptr[i];
    }    
}