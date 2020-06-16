#include "pianokeys.h"

char *my_strcat(char *str1, char *str2)
{
    int a = my_strlen(str1), b = my_strlen(str2);
    int i = 0, j = 0;
    char *new = malloc(sizeof(char) * (a + b + 1));
    for (; str1[j] != '\0'; j++, i++)
        new[i] = str1[j];
    for (j = 0; str2[j] != '\0'; j++, i++)
        new[i] = str2[j];
    new[i] = '\0';
    return (new);
}