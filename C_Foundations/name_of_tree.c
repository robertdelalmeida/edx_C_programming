#include <stdio.h>

int main(void)
{
    int height, leaflets, tinuviel, calaelen, falarion, dorthonion;
    scanf("%d%d", &height, &leaflets);
    tinuviel = height <= 5 && leaflets >= 8;
    calaelen = height >= 10 && leaflets >= 10;
    falarion = height <= 8 && leaflets <= 5;
    dorthonion = height >= 12 && leaflets <= 7;
    if (tinuviel)
    {
        printf("Tinuviel");
    }
    else if (calaelen) 
    {
        printf("Calaelen");
    }
    else if (falarion)
    {
        printf("Falarion");
    }
    else if (dorthonion)
    {
        printf("Dorthonion");
    }
    else {
        printf("Uncertain");
    }
}

/*
#include <stdio.h>
int main() {
    int height = 0;
    int nbLeaflets = 0;
    scanf("%d %d", &height, &nbLeaflets);
    int tinuviel = height <= 5 && nbLeaflets >= 8;
    int calaelen = height >= 10 && nbLeaflets >= 10;
    int falarion = height <= 8 && nbLeaflets <= 5;
    int dorthonion = height >= 12 && nbLeaflets <= 7;
    if(tinuviel) {
        printf("Tinuviel");
    }
    if(calaelen){
        printf("Calaelen");
    }
    if(falarion){
        printf("Falarion");
    }
    if(dorthonion){
        printf("Dorthonion");
    }
    if(!tinuviel && !calaelen && !falarion && !dorthonion){
        printf("Uncertain");
    }
    return 0;
}
*/