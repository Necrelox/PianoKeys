/*
** EPITECH PROJECT, 2020
** get_keys
** File description:
** get_keys
*/
// 65 = a 90 = z
#include "pianokeys.h"

int get_state_and_out(int nb)
{
    if (GetAsyncKeyState(nb)) {
        printf("oui\n");
        return (1);
    }
    if (GetAsyncKeyState(32)) {
        printf("oui\n");
        return (1);
    }
    return (0);
}

int get_keys(void)
{
    for (int out = 65; 1;) {
        if (get_state_and_out(out) == 1)
            continue;
        out++;
        out == 91 ? out = 65 :0;
        printf("non\n");
    }
    return (0);
}