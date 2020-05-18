/*
** EPITECH PROJECT, 2020
** get_keys
** File description:
** get_keys
*/

#include "pianokeys.h"

int get_keys(void)
{
    while (1) {
        if (GetAsyncKeyState('B')) {
            printf("oui\n");
        }
        else
            printf ("non\n");
    }
    return (0);
}