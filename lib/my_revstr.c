/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** string in string number charac
*/

#include "my.h"

char *my_revstr(char *str)
{
    char *str2 = malloc(sizeof(char) * (my_strlen(str) + 1));
    int i;
    int j = 0;

    for (i = 0; str[i] != '\0'; i++);
    i--;
    for (; i >= 0; i--, j++)
        str2[j] = str[i];
    str2[j] = '\0';
    return (str2);
}
