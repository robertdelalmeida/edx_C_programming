#include <stdio.h>

int main()
{
    char word[51], aux;
    int n = 0, c = 0, i, j, found = 0;
    scanf("%s", word);
    while (word[n] != '\0')
        n++;
    for (j = 0; j < n - 1; j++)
    {
        for (i = 0; i < n - 1; i++)
        {
            if (word[i] > word[i + 1])
            {
                aux = word[i];
                word[i] = word[i + 1];
                word[i + 1] = aux;
            }
        }
    }
    char letter[n];
    letter[0] = '0';
    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            for (int k = 0; k < c; k++) {
                if (word[i] == letter[k])
                   found = 1;
            }
            if (!found && (word[i] == word[i + j]))
            {
                letter[c] = word[i];
                c++;
                found = 1;
            }
            found = 0;
        }
    }
    printf("%d", c);
    return 0;
}

/*
#include <stdio.h>
int main(void)
{
    char word[51];
    int length = 0;
    int i, j;
    char swap;
    int repeats = 0;

    scanf("%s", word);
	
    while (word[length]!='\0')
	length++;

    //Sort the word by alphabetical order    
    for(j=0;j<length-1; j++) {
        for(i=0;i<length-1;i++) { 
            if (word[i] > word[i+1]) {
                swap = word[i];
                word[i]   = word[i+1];
                word[i+1] = swap;
            }
        }
    }
    
    i = 0;
    
    //Check for repeating characters in the sorted word
    while (i<length-1) {
        if (word[i]==word[i+1]) {
            repeats++;
            j=i+2;

            //Continues through the word until it reaches a new character
            while (j<length && word[i]==word[j]) 
                j++;
            i = j;
        } else {
            i++;
        }
    }
    
    printf("%d", repeats);

    return 0;
}
*/