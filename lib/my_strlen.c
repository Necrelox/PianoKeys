/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** TASK03
*/

#include "my.h"

int my_strlen(char const *str)
{
    int i = 0;

    for (;str[i] != '\0'; i++);
    return (i);
}
