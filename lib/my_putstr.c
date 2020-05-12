/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** A fonction that displays, one-by-one, the characters of a string
*/

#include "my.h"

int my_putstr(char const *str)
{
    for (int z = 0; str[z] ; z++)
        my_putchar(str[z]);
}
