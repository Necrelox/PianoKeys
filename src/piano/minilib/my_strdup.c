#include "pianokeys.h"

char *my_strdup(char *str)
{
    char *str2 = malloc(sizeof(char) * (my_strlen(str) + 1));
    if (!str2)
        return (NULL);
    int i = 0;
    for (;str[i] != '\0'; i++)
        str2[i] = str[i];
    str2[i] = '\0';
    return (str2);
}