/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** put number
*/

#include "my.h"

int my_put_nbr(int nb)
{
    if (nb < 0 && nb >= -2147483647) {
        nb = - nb;
        my_putchar('-');
    }
    if (nb <= 9 && nb >= -2147483647)
        my_putchar(nb + 48);
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_putchar((nb % 10)+ 48);
    }
    return (0);
}
