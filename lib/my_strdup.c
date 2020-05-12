/*
** EPITECH PROJECT, 2020
** my_strdyup
** File description:
** my_strdup
*/

#include "my.h"

char *my_strdup(char *str)
{
    char *result = malloc(sizeof(char) * (my_strlen(str) + 1));
    if (!result)
        return (NULL);

    int i;
    for (i = 0; str[i] != '\0'; i++)
        result[i] = str[i];
    result[i] = '\0';

    return (result);
}