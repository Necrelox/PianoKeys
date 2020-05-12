/*
** EPITECH PROJECT, 2020
** nb_to_str
** File description:
** nb_to_str
*/

#include "my.h"

char *nb_to_str(int nb)
{
    char *str = malloc(sizeof(*str));
    int mem = 0, i = 0, ret = 0;
    int nb1 = nb, nb2 = nb;

    while (nb != 0) {
        mem++;
        nb = nb / 10;
    }
    for (; i < mem; i++) {
        ret = nb2 % 10;
        nb2 = nb2 / 10;
        str[i] = ret + 48;
    }
    str[i] = '\0';
    return (str);
}