#include <stdio.h>

int main()
{
    int tempMin, tempMax, newTemp, stop;
    scanf("%d%d", &tempMin, &tempMax);
    stop = 0;
    while (newTemp != -999)
    {
        scanf("%d", &newTemp);
        if (!stop && newTemp >= tempMin && newTemp <= tempMax)
            printf("Nothing to report\n");
        else if (!stop && newTemp != -999)
        {
            printf("Alert!\n");
            stop = 1;
        }
    }
    return 0;
}

/*
#include <stdio.h>
int main()
{
    int tempMin, tempMax, temperature;
    int tempIsValid = 1;
    int end = 0;
    scanf("%d%d", &tempMin, &tempMax);

    while (!end && tempIsValid){
        scanf("%d", &temperature);
        end = (temperature == -999);

        tempIsValid = (tempMin <= temperature && temperature <= tempMax);

        if(!end){
            if (tempIsValid){
                printf("Nothing to report\n");
            } else {
                printf("Alert!\n");
            }
        }
    }

    return 0;
}
*/