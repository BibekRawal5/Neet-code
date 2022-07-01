#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool isAnagram(char *s, char *t)
{
    int i, j, count = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; t[j] != '\0'; j++)
        {
            if (s[i] == t[j])
            {
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
        printf("It is not an angram.");

    free(first);
    free(second);

}