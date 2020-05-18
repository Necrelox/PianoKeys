/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** my_strcmp
*/

#include "my.h"

int	my_strcmp(char *s1, char *s2)
{
    int i = 0;

    while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
        i++;
    return (s1[i] - s2[i]);
}