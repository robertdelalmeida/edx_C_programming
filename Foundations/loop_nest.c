#include <stdio.h>
int main(void){
    int nbThrows = 0;
    int nbDice = 0;
    int diceValue = 0;
    int throw = 0;
    int dice = 0;
    scanf("%d %d", &nbThrows, &nbDice);
    int throwSum[nbThrows];    
    for(throw = 0; throw<nbThrows; throw++){
        throwSum[throw] = 0;
        for(dice = 0; dice<nbDice; dice++){
            scanf("%d", &diceValue);
            throwSum[throw] = throwSum[throw] + diceValue;
        }
    }
    for (int i = 0; i < nbThrows; i++)
        printf("throw %d sum equals %d\n", i + 1, throwSum[i]);
    return 0;
}