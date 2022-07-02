#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool isAnagram(char *s, char *t)
{
    if (strlen(s) != strlen(t))
        return false;
        
    int i, j, count = 0;
    for(i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; t[j] != '\0'; j++)
        {
            if (s[i] == t[j])
            {
                t[j] = '0';
                count++;
                break;
            }    
        }

        if(count <= i){
            return false;
        }
    }

    return true;
}

int main()
{
    char *first , *second;
    first = malloc(sizeof(char) * 50);
    second = malloc(sizeof(char) * 50);

    printf("Enter first string: ");
    scanf("%s", first);

    printf("Enter the second string to check: ");
    scanf("%s", second);

    if(isAnagram(first, second) == true)
        printf("It is an anagram.");
  
    else
        printf("It is not an anagram.");

    free(first);
    free(second);

}