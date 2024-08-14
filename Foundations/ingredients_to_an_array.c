#include <stdio.h>

int main(void)
{
    int array[10], i = 0, j = 0, readInt, pos;
    pos = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &readInt);
        array[j] = readInt;
        j++;
    }
    scanf("%d", &pos);
    printf("%d", array[pos]);
    return 0;
}
 
/*
int main() {
    int array[10];
    int readValue = 0;
    int index = 0; //indice 

    for(int i = 0 ; i < 10 ; i++){
        scanf("%d", &readValue);
        array[index] = readValue;
        index = index + 1;
    }

    scanf("%d", &readValue);
    printf("%d", array[readValue]);
    return 0;
}
*/