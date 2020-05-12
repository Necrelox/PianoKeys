/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** get nbr in a string
*/

#include "my.h"

int my_getnbr(char *str)
{
    int i;
    int nb = 0;
    int count = 0;

    for (i = 0; str[i] < 48 || str[i] > 57; i++)
        if (str[i] == 45)
            count++;
    for (; str[i] >= 48 && str[i] <= 57; i++) {
        nb = nb * 10;
        nb = nb +(str[i] - 48);
        if (nb >= 2147483647 || nb <= -2147483647)
            return (0);
    }
    if (count % 2 != 0)
        nb = -nb;
    return (nb);
}

int verif_if_number(char *str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0' && str[i] != ' '; i++)
        if (str[i] > 47 && str[i] < 58)
            count++;
    return (count);
}
