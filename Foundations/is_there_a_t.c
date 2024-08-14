#include <stdio.h>

int main()
{
    int i, j, house, odd, even;
    char word[51];
    i = 0;
    j = 0;
    house = -1;
    odd = 0;
    even = 0;

    scanf("%s", word);
    
    while (word[i] != '\0')
        i++;
    if (i % 2 == 0) even = 1;
    else odd = 1;
    i = i / 2;
    while (word[j] != '\0')
    {
        if (word[j] == 't' || word[j] == 'T')
            house = j;
        j++;
    }
    if (even && house != -1)
        if (house >= i)
            printf("2");
        else
            printf("1");
    else if (odd && house != -1)
        if (house <= i)
            printf("1");
        else
            printf("2");
    else
        printf("-1");
    return 0;
}

/*
#include <stdio.h>
int main(void)
{
	char word[51];
	int length = 0;
	int i,found, maxindex;

	scanf("%s", word);
	
	while (word[length]!='\0')
	    length++;
	if (length%2==0)
	    maxindex = length/2-1;
	else
	    maxindex = length/2;
	
	i = 0;
	found = 0;
	while (!found && i < length) {
		if (word[i]=='t' || word[i]=='T') found++;
		else i++;
	}

	if (!found) 
	    printf("-1");
	else if (i <= maxindex) printf("1");
	else printf("2");

	return 0;
}
*/