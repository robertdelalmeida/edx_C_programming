#include <stdio.h>

int main(void)
{
    int numOfIngredients, i;
    numOfIngredients = 0;
    scanf("%d", &numOfIngredients);
    double price[numOfIngredients], pounds[numOfIngredients], sum, quantity;
    sum = 0.0;
    quantity = 0.0;
    for (i = 0; i < numOfIngredients; i++)
    {
        scanf("%lf", &price[i]);
    }
    for (i = 0; i < numOfIngredients; i++)
    {
        scanf("%lf", &pounds[i]);
    }
    for (i = 0; i < numOfIngredients; i++)
    {
        quantity = price[i] * pounds[i];
        sum = sum + quantity;
    }
    printf("%lf", sum);
}

/*
#include <stdio.h>

int main()
{
    int nbIngredients=0;
    int i, idIngredient;
    double price[10];
    double totalPrice = 0.0;
    double readPrice=0.0;

    scanf("%d", &nbIngredients);

    for(i = 0; i < nbIngredients; i++){
        scanf("%lf",&readPrice);
        price[i] = readPrice;
    }

    for (idIngredient = 0; idIngredient < nbIngredients; idIngredient++)
    {
        double quantity;
        scanf("%lf\n",&quantity);
        totalPrice = totalPrice + price[idIngredient] * quantity;
    }
    printf("%lf\n",totalPrice);

    return 0;
}
*/