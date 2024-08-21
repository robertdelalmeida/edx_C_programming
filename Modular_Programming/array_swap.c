#include <stdio.h>

void reverseArray(int *);

int main()
{
    int i, j, arr[6];
    
    for (i = 0; i < 6; i++)
        scanf("%d", &arr[i]);
    
    reverseArray(arr);

    for (j = 0; j < 6; j++)
        printf("%d ", arr[j]);

    return 0;
}

void reverseArray(int *ptr)
{
    int k, aux = 0, size = 6;

    for (k = 0; k < size / 2; k++) {
        aux = ptr[k];
        ptr[k] = ptr[size - 1 - k];
        ptr[size - 1 - k] = aux;
    }
}

/*
#include <stdio.h>

void reverseArray(int *arr);

int main (void){
	int arr[6];
	int i;

	for (i = 0; i < 6; i++){
		scanf("%d", &arr[i]);
	}

	reverseArray(arr);

	for (i = 0; i < 6; i++){
		printf("%d ", arr[i]);
	}

	return 0;
}

void reverseArray(int *arr){
	int swap;

	swap = arr[5];
	arr[5] = arr[0];
	arr[0] = swap;
	
	swap = arr[4];
	arr[4] = arr[1];
	arr[1] = swap;
	
	swap = arr[3];
	arr[3] = arr[2];
	arr[2] = swap;
}
*/