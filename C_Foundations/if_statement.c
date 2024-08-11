#include <stdio.h>

int main()
{
    int passengers;
    double costOfTrip;
    scanf("%d%lf", &passengers, &costOfTrip);
    if (passengers){
        printf("%.2lf\n", (costOfTrip + 1) / (passengers + 1));
    }
    else {
        printf("%.2lf", costOfTrip);
    }
    return 0;
}
